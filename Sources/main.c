#include "includes.h"


int main(void) 
{
  	disable_watchdog();
  	init_modes_and_clock();
  	initEMIOS_0Image();/* 摄像头输入中断初始化 */
  	init_led();
  	init_DSPI_1();/* 初始化SPI总线 */
  	init_EMIOS_0();
    init_key_0();
    init_key_1();
    init_key_2();
    init_key_3();
  	enable_irq();/* 开启外部总中断 */
  	
  	initLCD();/* 初始化显示屏 */
  	
  	LCD_Fill(0xFF);	/* 亮屏 */
  	delay_ms(1000);
  	LCD_Fill(0x00);	/* 黑屏 */
  	delay_ms(1000);

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
            EMIOS_0.CH[3].CSR.B.FLAG = 1;
            EMIOS_0.CH[3].CCR.B.FEN=1;
        }
    }
}



