#include "includes.h"



int main(void) 
{
  	disable_watchdog();
  	init_modes_and_clock();
  	init_led();
  	init_DSPI_1();
  	init_EMIOS_0();
  	init_key_1();
  	enable_irq();   /* 开启外部总中断 */
  	
  	initLCD();  /* 初始化显示屏 */
  	LCD_Fill(0xFF); /* 亮屏 */
  	delay_ms(1000);
  	LCD_Fill(0x00); /* 黑屏 */
  	delay_ms(1000);

    /* Loop forever */
    for (;;) 
    {
        
    }
}



