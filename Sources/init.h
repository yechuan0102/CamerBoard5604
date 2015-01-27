#ifndef __INIT_H__
#define __INIT_H__



extern void init_modes_and_clock(void);
extern void disable_watchdog(void);
extern void init_led(void);
extern void enable_irq(void);
extern void initEMIOS_0Image(void) ;



extern void delay_us(DWORD us);
extern void delay_ms(DWORD ms);

extern void initEMIOS_0Image(void);			//场行中断初始化


#endif
