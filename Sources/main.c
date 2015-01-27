#include "includes.h"



int main(void) 
{
  BYTE x,y;
  	int flag = 1;
  //=================================
  	disable_watchdog();
  	init_modes_and_clock();
  	initEMIOS_0Image();//摄像头输入中断初始化
  	init_led();
  		/* 初始化SPI总线 */
  	init_DSPI_1();
  	
  	/* 开启外部总中断 */
  	enable_irq();
  	
  	/* 初始化显示屏 */
  	initLCD();
  	
  	//LCD_DISPLAY();
  	LCD_Fill(0xFF);	/* 亮屏 */
  	delay_ms(1000);
  	LCD_Fill(0x00);	/* 黑屏 */
  	delay_ms(1000);
  	for(y=0;y<=0;y++)
  	{
  		LCD_Set_Pos(10,y);				
      	for(x=10;x<100;x++)
  	    {      
  	    	LCD_WrDat(0x2F);	    	
  	    }
  	}
  	for(y=0;y<=0;y++)
  	{
  		LCD_Set_Pos(10,y);				
      	for(x=10;x<100;x++)
  	    {      
  	    	LCD_WrDat(0xF0);	    	
  	    }
  	}
  

  	EMIOS_0.CH[3].CCR.B.FEN=1;
  /* Loop forever */
  for (;;) 
  {
		D2=~D2;
			if(fieldover==1)
			{
				Display_Video();
				D3=~D3;
				fieldover=0;
		//		EMIOS_0.CH[3].CSR.B.FLAG = 1;
				EMIOS_0.CH[3].CCR.B.FEN=1;
			}
			//	EMIOS_0.CH[3].CSR.B.FLAG = 1;
			//	delay_ms(100);
  }
}



