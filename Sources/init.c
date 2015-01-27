#define __INIT_C_
#include "includes.h"



/*-----------------------------------------------------------------------*/
/* ���õ�Ƭ����ģʽ��ʱ��                                                */
/*-----------------------------------------------------------------------*/
void init_modes_and_clock(void) 
{
    ME.MER.R = 0x0000001D;	/* Enable DRUN, RUN0, SAFE, RESET modes */
	/* ����sysclk */
    //CGM.FMPLL_CR.R = 0x02400100;	/* 8 MHz xtal: Set PLL0 to 64 MHz */
    CGM.FMPLL_CR.R = 0x01280000;	/* 8 MHz xtal: Set PLL0 to 80 MHz */
    //CGM.FMPLL_CR.R = 0x013C0000;	/* 8 MHz xtal: Set PLL0 to 120 MHz */ 
    ME.RUN[0].R = 0x001F0064;	/* RUN0 cfg: 16MHzIRCON,OSC0ON,PLL0ON,syclk=PLL     sysclkѡ�����໷ʱ�� */
    ME.RUNPC[0].R = 0x00000010;	/* Peri. Cfg. 1 settings: only run in RUN0 mode      ѡ��RUN0ģʽ */
  
	/* PCTL[?] ѡ����Ҫʱ��ģ��(Ĭ�ϼ��ɣ���������) */
	//ME.PCTL[32].R = 0x00;	/* MPC56xxB/P/S ADC 0: select ME.RUNPC[0] */
    ME.PCTL[32].B.DBG_F = 0;
	/* Mode Transition to enter RUN0 mode */
    ME.MCTL.R = 0x40005AF0;	/* Enter RUN0 Mode & Key */
    ME.MCTL.R = 0x4000A50F;	/* Enter RUN0 Mode & Inverted Key */
    
    while (ME.GS.B.S_MTRANS) {}	/* Wait for mode transition to complete �ȴ�ģʽת����� */
    while(ME.GS.B.S_CURRENTMODE != 4) {} /* Verify RUN0 is the current mode �ȴ�ѡ��RUN0ģʽ */
  
	/* ��peri0��1��2 */
	/* ����ʱ������ �����ڷ�Ƶ */
	CGM.SC_DC[0].R = 0x84;	/* LIN */
	CGM.SC_DC[1].R = 0x80;	/* FLEXCAN,DSPI */
    CGM.SC_DC[2].R = 0x80;	/* eMIOS,CTU,ADC */
}


/*-----------------------------------------------------------------------*/
/* ���ÿ��Ź�                                                            */
/* ���첩˵Ӧ����������                                                  */
/*-----------------------------------------------------------------------*/
void disable_watchdog(void)
{
	SWT.SR.R = 0x0000c520;	/* rite keys to clear soft lock bit */
	SWT.SR.R = 0x0000d928;
	SWT.CR.R = 0x8000010A;	/* Clear watchdog enable (WEN) */
}


/*-----------------------------------------------------------------------*/
/* ��ʼSPI����	                                                        */
/*-----------------------------------------------------------------------*/
void init_DSPI_1(void)
{
	DSPI_1.MCR.R = 0x803f0001;     /* Configure DSPI_0 as master */
	DSPI_1.CTAR[0].R = 0x3E0A7729;	//δʹ�� ���ڷ���8bits ��������Ϊ1����λΪ1������������Ϊ����31.25kbit/s
	DSPI_1.CTAR[1].R = 0x38087726;  //TF ����Ϊ0����λΪ0��baud rate=625k/s
	DSPI_1.CTAR[2].R = 0x3E0A7724;  //L3G4200D ����Ϊ1����λΪ1��baud rate=1m/s
	DSPI_1.CTAR[3].R = 0x380A7720;	//OLED ����Ϊ0����λΪ0��baud rate=8m/s
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
	DSPI_1.RSER.B.TCFRE = 0;	//�رմ�������ж�
}


/*-----------------------------------------------------------------------*/
/* ��ʼ������LED                                                         */
/*-----------------------------------------------------------------------*/
void init_led(void)
{
 	SIU.PCR[40].R = 0x0203;	/* PC8  */
  	SIU.PCR[45].R = 0x0203; /* PC13 */
 	SIU.PCR[44].R = 0x0203; /* PC12 */
	SIU.PCR[71].R = 0x0203;	/* PE7  */
 	
	SIU.GPDO[40].R = 1;	/* 1=Ϩ�� */
	SIU.GPDO[45].R = 1;
	SIU.GPDO[44].R = 1;
	SIU.GPDO[71].R = 1;
}



/*----------------------------------------------------------------------*/
/*��Ƶ�źų����жϳ�ʼ                                             	 */
/*----------------------------------------------------------------------*/
void initEMIOS_0Image(void) 
{ 
	//PA3���жϲ�׽�����ؼ��½���
	EMIOS_0.CH[3].CCR.B.MODE = 0x02; // Mode is SAIC, continuous 
	EMIOS_0.CH[3].CCR.B.BSL = 0x01; /* Use counter bus B (default) */
	EMIOS_0.CH[3].CCR.B.EDSEL = 1;  //Both edges
//	EMIOS_0.CH[3].CCR.B.EDPOL=1; //Edge Select falling edge
//	EMIOS_0.CH[3].CCR.B.FEN=1;  //interupt enbale
	SIU.PCR[3].R = 0x0102;  // Initialize pad for eMIOS channel Initialize pad for input 
	INTC_InstallINTCInterruptHandler(FieldInputCapture,142,1);  
	
	//PA7���жϲ�׽������
	EMIOS_0.CH[7].CCR.B.MODE = 0x02; // Mode is SAIC, continuous 
	EMIOS_0.CH[7].CCR.B.BSL = 0x01; /* Use counter bus B (default) */
	EMIOS_0.CH[7].CCR.B.EDSEL = 0;
	EMIOS_0.CH[7].CCR.B.EDPOL=1; //Edge Select rising edge
//	EMIOS_0.CH[7].CCR.B.FEN=1;  //interupt enbale
	SIU.PCR[7].R = 0x0102;  // Initialize pad for eMIOS channel Initialize pad for input 
	INTC_InstallINTCInterruptHandler(RowInputCapture,144,3); 
	
	//C10�ڶ�ֵ�����
	SIU.PCR[42].R = 0x0102;  // C9�ڶ�ֵ�����
}



/*-----------------------------------------------------------------------*/
/* ʹ���ⲿ�ж�                                                          */
/* �ܿ���                                                                */
/*-----------------------------------------------------------------------*/
void enable_irq(void)
{
  INTC.CPR.B.PRI = 0;	/* Single Core: Lower INTC's current priority */
  asm(" wrteei 1");	/* Enable external interrupts */
}




/*-----------------------------------------------------------------------*/
/* ��ʱ xus                                                              */
/* ��������80M                                                           */
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
/* ��ʱ xms                                                              */
/* ����delay_us()                                                        */
/*-----------------------------------------------------------------------*/
void delay_ms(DWORD ms)
{
	int i;
	
	for (i = 0; i < ms; i++)
	{
		delay_us(1000);
	}
}








