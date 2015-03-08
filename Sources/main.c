#include "includes.h"


int main(void) 
{
    wchar_t test1;
    int xSize1;
    uint8_t font1[16*16];
    
  	disable_watchdog();
  	init_modes_and_clock();
  	init_led();
  	init_DSPI_1();/* 初始化SPI总线 */
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

  	test1 = L'人';
  	unicode_to_font(test1, 16, 16, &xSize1, font1);
  	
  	/* Loop forever */
    for (;;) 
    {
    }
}



