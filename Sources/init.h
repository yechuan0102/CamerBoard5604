#ifndef __INIT_H__
#define __INIT_H__



extern void init_modes_and_clock(void);
extern void disable_watchdog(void);
extern void init_led(void);
extern void enable_irq(void);
extern void initEMIOS_0Image(void) ;



extern void delay_us(DWORD us);
extern void delay_ms(DWORD ms);
extern void init_DSPI_1(void);
extern void initEMIOS_0Image(void);			//场行中断初始化
extern void init_EMIOS_0(void);
extern void init_key_0(void);
extern void init_key_1(void);
extern void init_key_2(void);
extern void init_key_3(void);
extern void INTC_press_key_0_2_handler(void);
extern void INTC_press_key_1_handler(void);
extern void INTC_press_key_3_handler(void);


#endif
