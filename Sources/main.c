#include "includes.h"



int main(void) 
{
  BYTE x,y;
  	int flag = 1;
  //=================================
  	disable_watchdog();
  	init_modes_and_clock();
  	initEMIOS_0Image();//����ͷ�����жϳ�ʼ��
  	init_led();
  		/* ��ʼ��SPI���� */
  	init_DSPI_1();
  	
  	/* �����ⲿ���ж� */
  	enable_irq();
  	
  	/* ��ʼ����ʾ�� */
  	initLCD();
  	
  	//LCD_DISPLAY();
  	LCD_Fill(0xFF);	/* ���� */
  	delay_ms(1000);
  	LCD_Fill(0x00);	/* ���� */
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



