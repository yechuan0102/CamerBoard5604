#define __INIT_C_
#include "includes.h"



/*-----------------------------------------------------------------------*/
/* 设置单片机的模式和时钟                                                */
/*-----------------------------------------------------------------------*/
void init_modes_and_clock(void) 
{
    ME.MER.R = 0x0000001D;	/* Enable DRUN, RUN0, SAFE, RESET modes */
	/* 设置sysclk */
    //CGM.FMPLL_CR.R = 0x02400100;	/* 8 MHz xtal: Set PLL0 to 64 MHz */
    CGM.FMPLL_CR.R = 0x01280000;	/* 8 MHz xtal: Set PLL0 to 80 MHz */
    //CGM.FMPLL_CR.R = 0x013C0000;	/* 8 MHz xtal: Set PLL0 to 120 MHz */ 
    ME.RUN[0].R = 0x001F0064;	/* RUN0 cfg: 16MHzIRCON,OSC0ON,PLL0ON,syclk=PLL     sysclk选择锁相环时钟 */
    ME.RUNPC[0].R = 0x00000010;	/* Peri. Cfg. 1 settings: only run in RUN0 mode      选择RUN0模式 */
  
	/* PCTL[?] 选择需要时钟模块(默认即可，不用设置) */
	//ME.PCTL[32].R = 0x00;	/* MPC56xxB/P/S ADC 0: select ME.RUNPC[0] */
    ME.PCTL[32].B.DBG_F = 0;
	/* Mode Transition to enter RUN0 mode */
    ME.MCTL.R = 0x40005AF0;	/* Enter RUN0 Mode & Key */
    ME.MCTL.R = 0x4000A50F;	/* Enter RUN0 Mode & Inverted Key */
    
    while (ME.GS.B.S_MTRANS) {}	/* Wait for mode transition to complete 等待模式转换完成 */
    while(ME.GS.B.S_CURRENTMODE != 4) {} /* Verify RUN0 is the current mode 等待选择RUN0模式 */
  
	/* 开peri0、1、2 */
	/* 外设时钟总线 可用于分频 */
	CGM.SC_DC[0].R = 0x84;	/* LIN */
	CGM.SC_DC[1].R = 0x80;	/* FLEXCAN,DSPI */
    CGM.SC_DC[2].R = 0x80;	/* eMIOS,CTU,ADC */
}


/*-----------------------------------------------------------------------*/
/* 禁用看门狗                                                            */
/* 据徐博说应该首先运行                                                  */
/*-----------------------------------------------------------------------*/
void disable_watchdog(void)
{
	SWT.SR.R = 0x0000c520;	/* rite keys to clear soft lock bit */
	SWT.SR.R = 0x0000d928;
	SWT.CR.R = 0x8000010A;	/* Clear watchdog enable (WEN) */
}


/*-----------------------------------------------------------------------*/
/* 初始SPI总线	                                                        */
/*-----------------------------------------------------------------------*/
void init_DSPI_1(void)
{
	DSPI_1.MCR.R = 0x803f0001;     /* Configure DSPI_0 as master */
	DSPI_1.CTAR[0].R = 0x3E0A7729;	//未使用 用于发送8bits 调整极性为1，相位为1，调整波特率为低速31.25kbit/s
	DSPI_1.CTAR[1].R = 0x38087726;  //TF 极性为0，相位为0，baud rate=625k/s
	DSPI_1.CTAR[2].R = 0x3E0A7724;  //L3G4200D 极性为1，相位为1，baud rate=1m/s
	DSPI_1.CTAR[3].R = 0x380A7720;	//OLED 极性为0，相位为0，baud rate=8m/s
	DSPI_1.MCR.B.HALT = 0x0;	     /* Exit HALT mode: go from STOPPED to RUNNING state*/
	SIU.PCR[34].R = 0x0604;	//PC2 SCK_1
	//SIU.PSMI[7].R = 0;	//SCK_1 PCR[34]
	SIU.PCR[35].R = 0x0503;	//PC3 CS0_1
	//SIU.PSMI[9].R = 0;	//CS0_1 PCR[35]
	SIU.PCR[36].R = 0x0104;	//PC4 SIN_1
	//SIU.PSMI[8].R = 0;	//SIN_1 PCR[36]
	SIU.PCR[62].R = 0x0604;	//PD14 CS1_1
	SIU.PCR[63].R = 0x0604;	//PD15 CS2_1
	SIU.PCR[67].R = 0x0A04;	//PE3 SOUT_1
	SIU.PCR[74].R = 0x0A04;	//PE10 CS3_1
	SIU.PCR[75].R = 0x0A04;	//PE11 CS4_1
	DSPI_1.RSER.B.TCFRE = 0;	//关闭传输完成中断
}


/*-----------------------------------------------------------------------*/
/* 初始化板载LED                                                         */
/*-----------------------------------------------------------------------*/
void init_led(void)
{
 	SIU.PCR[40].R = 0x0203;	/* PC8  */
  	SIU.PCR[45].R = 0x0203; /* PC13 */
 	SIU.PCR[44].R = 0x0203; /* PC12 */
	SIU.PCR[71].R = 0x0203;	/* PE7  */
 	
	SIU.GPDO[40].R = 1;	/* 1=熄灭 */
	SIU.GPDO[45].R = 1;
	SIU.GPDO[44].R = 1;
	SIU.GPDO[71].R = 1;
}



/*----------------------------------------------------------------------*/
/*视频信号场行中断初始                                             	 */
/*----------------------------------------------------------------------*/
void initEMIOS_0Image(void) 
{ 
	//PA3场中断捕捉上升沿及下降沿
	EMIOS_0.CH[3].CCR.B.MODE = 0x02; // Mode is SAIC, continuous 
	EMIOS_0.CH[3].CCR.B.BSL = 0x01; /* Use counter bus B (default) */
	EMIOS_0.CH[3].CCR.B.EDSEL = 1;  //Both edges
//	EMIOS_0.CH[3].CCR.B.EDPOL=1; //Edge Select falling edge
//	EMIOS_0.CH[3].CCR.B.FEN=1;  //interupt enbale
	SIU.PCR[3].R = 0x0102;  // Initialize pad for eMIOS channel Initialize pad for input 
	INTC_InstallINTCInterruptHandler(FieldInputCapture,142,1);  
	
	//PA7行中断捕捉上升沿
	EMIOS_0.CH[7].CCR.B.MODE = 0x02; // Mode is SAIC, continuous 
	EMIOS_0.CH[7].CCR.B.BSL = 0x01; /* Use counter bus B (default) */
	EMIOS_0.CH[7].CCR.B.EDSEL = 0;
	EMIOS_0.CH[7].CCR.B.EDPOL=1; //Edge Select rising edge
//	EMIOS_0.CH[7].CCR.B.FEN=1;  //interupt enbale
	SIU.PCR[7].R = 0x0102;  // Initialize pad for eMIOS channel Initialize pad for input 
	INTC_InstallINTCInterruptHandler(RowInputCapture,144,3); 
	
	//C10口二值化入口
	SIU.PCR[42].R = 0x0102;  // C9口二值化入口
}



/*-----------------------------------------------------------------------*/
/* 使能外部中断                                                          */
/* 总开关                                                                */
/*-----------------------------------------------------------------------*/
void enable_irq(void)
{
  INTC.CPR.B.PRI = 0;	/* Single Core: Lower INTC's current priority */
  asm(" wrteei 1");	/* Enable external interrupts */
}




/*-----------------------------------------------------------------------*/
/* 延时 xus                                                              */
/* 依赖总线80M                                                           */
/*-----------------------------------------------------------------------*/
void delay_us(DWORD us)
{
	volatile int i, j;
	
	for (i = 0; i < us; i++)
	{
		for (j = 0; j < 9; j++) {}
	}
}


/*-----------------------------------------------------------------------*/
/* 延时 xms                                                              */
/* 依赖delay_us()                                                        */
/*-----------------------------------------------------------------------*/
void delay_ms(DWORD ms)
{
	int i;
	
	for (i = 0; i < ms; i++)
	{
		delay_us(1000);
	}
}


/*
 * 初始化EMIOS_0模块
 */
void init_EMIOS_0(void)
{
    /* eMIOS0初始化80MHz分为10MHz */
    EMIOS_0.MCR.B.GPRE= 7;  /* GPRE+1=分频系数；/* Divide 80 MHz sysclk by 7+1 = 8 for 10MHz eMIOS clk */
    EMIOS_0.MCR.B.GPREN = 1;    /* Enable eMIOS clock */
    EMIOS_0.MCR.B.GTBE = 1;   /* Enable global time base */
    EMIOS_0.MCR.B.FRZ = 1;    /* Enable stopping channels when in debug mode */
}


/* 
 * 初始化按键
 * 测试中
 * 使用E0
 */
void init_key_1(void)
{
    //PB12 E0UC4 下降沿
    EMIOS_0.CH[4].CCR.B.MODE = 0x02; // Mode is SAIC, continuous 
    EMIOS_0.CH[4].CCR.B.BSL = 0b11; /* Use counter bus B (default) */
    EMIOS_0.CH[4].CCR.B.EDSEL = 0;  //Both edges
    EMIOS_0.CH[4].CCR.B.EDPOL = 1; //Edge Select falling edge
    SIU.PCR[28].R = 0x0100;  // Initialize pad for eMIOS channel Initialize pad for input
    SIU.PSMI[14].B.PADSEL = 0b01;
    INTC_InstallINTCInterruptHandler(INTC_press_key_0_handler, 143, 1);
    EMIOS_0.CH[4].CCR.B.FEN = 1;  //interupt enbale
}


/*
 * 按键0中断处理函数
 * 使用
 */
void INTC_press_key_0_handler(void)
{
    if (EMIOS_0.CH[4].CSR.B.FLAG)
    {
        EMIOS_0.CH[4].CSR.B.FLAG = 1;
        D1 = ~D1;
    }
    else if (EMIOS_0.CH[5].CSR.B.FLAG)
    {
        EMIOS_0.CH[5].CSR.B.FLAG = 1;
    }
}
