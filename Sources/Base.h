/*
 * Base.h
 *
 *  Created on: Aug 26, 2014
 *      Author: littlecat
 */

#ifndef __BASE_H__
#define __BASE_H__


/* Software configurable flag */
#define IRQ_Software_configurable_flag_0 (0)
#define IRQ_Software_configurable_flag_1 (1)
#define IRQ_Software_configurable_flag_2 (2)
#define IRQ_Software_configurable_flag_3 (3)
#define IRQ_Software_configurable_flag_4 (4)
#define IRQ_Software_configurable_flag_5 (5)
#define IRQ_Software_configurable_flag_6 (6)
#define IRQ_Software_configurable_flag_7 (7)


/* SIUL */
#define IRQ_SIU_External_IRQ_0 (41)
#define IRQ_SIU_External_IRQ_1 (42)


/* DSPI_0 */
#define PA12_AFN_SIN_0 (0b00)
#define PA13_AF1_S0UT_0 (0b01)
#define PA14_AF1_SCK_0 (0b01)
#define PA14_AF2_CS0_0 (0b10)
#define PA15_AF1_CS0_0 (0b01)
#define PA15_AF2_SCK_0 (0b10)
#define PB118_AF3_CS0_0 (0b11)
#define PB12_AF3_CS1_0 (0b11)
#define PB13_AF3_CS2_0 (0b11)
#define PB14_AF3_CS3_0 (0b11)
#define PB15_AF3_CS4_0 (0b11)
#define PD128_AF1_CS5_0 (0b01)
#define PE6_AF2_CS3_0 (0b10)
#define PE7_AF2_CS2_0 (0b10)
#define PF8_AF2_CS4_0 (0b10)
#define PF9_AF2_CS5_0 (0b10)

#define PADSEL5_DSPI_0_SCK_0_PA14 (0b00)
#define PADSEL5_DSPI_0_SCK_0_PA15 (0b01)
#define PADSEL6_DSPI_0_CS0_0_PA14 (0b00)
#define PADSEL6_DSPI_0_CS0_0_PA15 (0b01)
#define PADSEL6_DSPI_0_CS0_0_PB11 (0b10)


/* DSPI_1 */
#define PC2_AF1_SCK_1 (0b01)
#define PC3_AF1_CS0_1 (0b01)
#define PC4_AFN_SIN_1 (0b00)
#define PC5_AF1_SOUT_1 (0b01)
#define PD13_AF1_CS0_1 (0b01)
#define PD14_AF1_CS1 1 (0b01)
#define PD15_AF1_CS2_1 (0b01)
#define PE2_AFN_SIN_1 (0b00)
#define PE3_AF2_SOUT_1 (0b10)
#define PE4_AF2_SCK_1 (0b10)
#define PE5_AF2_CS0_1 (0b10)
#define PE10_AF2_CS3_1 (0b10)
#define PE11_AF2_CS4_1 (0b10)
#define PF0_AF2_CS3_1 (0b10)
#define PF1_AF2_CS4_1 (0b10)
#define PH0_AFN_SIN1 (0b00)
#define PH1_AF2_S0UT1 (0b10)
#define PH2_AF2_SCK 1 (0b10)
#define PH3_AF2_CS0 1 (0b10)

#define PADSEL7_DSPI_1_SCK_1_PC2 (0b00)
#define PADSEL7_DSPI_1_SCK_1_PE4 (0b01)
#define PADSEL7_DSPI_1_SCK_1_PH2 (0b10)
#define PADSEL8_DSPI_1_SIN_1_PC4 (0b00)
#define PADSEL8_DSPI_1_SIN_1_PE2 (0b01)
#define PADSEL8_DSPI_1_SIN_1_PH0 (0b10)
#define PADSEL9_DSPI_1_CS0_1_PC3 (0b00)
#define PADSEL9_DSPI_1_CS0_1_PD13 (0b01)
#define PADSEL9_DSPI_1_CS0_1_PE5 (0b10)
#define PADSEL9_DSPI_1_CS0_1_PH3 (0b11)


/* DSPI_2 */
#define PC15_AF2_CS0_2 (0b10)
#define PE15_AF1_CS0_2 (0b01)
#define PF2_AF2_CS0_2 (0b10)
#define PG8_AF3_CS0_2 (0b11)
#define PF3_AF2_CS1_2 (0b10)
#define PF4_AF2_CS2_2 (0b10)
#define PH8_AF2_CS2_2 (0b10)
#define PF5_AF2_CS3_2 (0b10)
#define PH7_AF2_CS3_2 (0b10)
#define PE14_AF1_SCK 2 (0b01)
#define PC14_AF2_SCK_2 (0b10)
#define PG9_AF3_SCK_2 (0b11)
#define PC12_AFN_SIN_2 (0b00)
#define PE12_AFN_SIN_2 (0b00)
#define PC13_AF2_SOUT_2 (0b10)
#define PE13_AF1_SOUT2 (0b01)

#define PADSEL10_DSPI_2_SCK_2_PC14 (0b00)
#define PADSEL10_DSPI_2_SCK_2_PE14 (0b01)
#define PADSEL10_DSPI_2_SCK_2_PG9 (0b10)
#define PADSEL11_DSPI_2_SIN_2_PC12 (0b00)
#define PADSEL11_DSPI_2_SIN_2_PE12 (0b01)
#define PADSEL12_DSPI_2_CS0_2_PC15 (0b00)
#define PADSEL12_DSPI_2_CS0_2_PE15 (0b01)
#define PADSEL12_DSPI_2_CS0_2_PF2 (0b10)
#define PADSEL12_DSPI_2_CS0_2_PG8 (0b11)


/* eMIOS_0  */
#define PA0_AF1_E0UC0 (0b01)
#define PA1_AF1_E0UC1 (0b01)
#define PA2_AF1_E0UC2 (0b01)
#define PA3_AF1_E0UC3 (0b01)
#define PA4_AF1_E0UC4 (0b01)
#define PA5_AF1_E0UC5 (0b01)
#define PA6_AF1_E0UC6 (0b01)
#define PA7_AF1_E0UC7 (0b01)
#define PA8_AF1_E0UC8 (0b01)
#define PA9_AF1_E0UC9 (0b01)
#define PA10_AF1_E0UC10 (0b01)
#define PA11_AF1_E0UC11 (0b01)
#define PB11_AF1_E0UC3 (0b01)
#define PB12_AF1_E0UC4 (0b01)
#define PB13_AF1_E0UC5 (0b01)
#define PB14_AF1_E0UC6 (0b01)
#define PB15_AF1_E0UC7 (0b01)
#define PC12_AF1_E0UC12 (0b01)
#define PC13_AF1_E0UC13 (0b01)
#define PC14_AF1_E0UC14 (0b01)
#define PC15_AF1_E0UC15 (0b01)
#define PD12_AF2_E0UC24 (0b10)
#define PD13_AF2_E0UC25 (0b10)
#define PD14_AF2_E0UC26 (0b10)
#define PD15_AF2_E0UC27 (0b10)
#define PE0_AF1_E0UC16 (0b01)
#define PE1_AF1_E0UC17 (0b01)
#define PE2_AF1_E0UC18 (0b01)
#define PE3_AF1_E0UC19 (0b01)
#define PE4_AF1_E0UC20 (0b01)
#define PE5_AF1_E0UC21 (0b01)
#define PE6_AF1_E0UC22 (0b01)
#define PE7_AF1_E0UC23 (0b01)
#define PE8_AF2_E0UC22 (0b10)
#define PE9_AF2_E0UC23 (0b10)

#define PADSEL13_eMIOS_0_E1UC3_PA3 (0b00)
#define PADSEL13_eMIOS_0_E1UC3_PB11 (0b01)
#define PADSEL14_eMIOS_0_E0UC4_PA4 (0b00)
#define PADSEL14_eMIOS_0_E0UC4_PB12 (0b01)
#define PADSEL15_eMIOS_0_E0UC5_PA5 (0b00)
#define PADSEL15_eMIOS_0_E0UC5_PB13 (0b01)
#define PADSEL16_eMIOS_0_E0UC6_PA6 (0b00)
#define PADSEL16_eMIOS_0_E0UC6_PB14 (0b01)
#define PADSEL17_eMIOS_0_E0UC7_PA7 (0b00)
#define PADSEL17_eMIOS_0_E0UC7_PB15 (0b01)
#define PADSEL18_eMIOS_0_E0UC10_PA10 (0b00)
#define PADSEL18_eMIOS_0_E0UC10_PF0 (0b01)
#define PADSEL19_eMIOS_0_E0UC11_PA11 (0b00)
#define PADSEL19_eMIOS_0_E0UC11_PF1 (0b01)
#define PADSEL20_eMIOS_0_E0UC12_PC12 (0b00)
#define PADSEL20_eMIOS_0_E0UC12_PF2 (0b01)
#define PADSEL21_eMIOS_0_E0UC13_PC13 (0b00)
#define PADSEL21_eMIOS_0_E0UC13_PF3 (0b01)
#define PADSEL22_eMIOS_0_E0UC14_PC14 (0b00)
#define PADSEL22_eMIOS_0_E0UC14_PF4 (0b01)
#define PADSEL23_eMIOS_0_E0UC22_PE6 (0b00)
#define PADSEL23_eMIOS_0_E0UC22_PE8 (0b01)
#define PADSEL23_eMIOS_0_E0UC22_PF5 (0b10)
#define PADSEL24_eMIOS_0_E0UC23_PE7 (0b00)
#define PADSEL24_eMIOS_0_E0UC23_PE9 (0b01)
#define PADSEL24_eMIOS_0_E0UC23_PF6 (0b10)
#define PADSEL25_eMIOS_0_E0UC24_PD12 (0b00)
#define PADSEL25_eMIOS_0_E0UC24_PG10 (0b01)
#define PADSEL26_eMIOS_0_E0UC25_PD13 (0b00)
#define PADSEL26_eMIOS_0_E0UC25_PG11 (0b01)
#define PADSEL27_eMIOS_0_E0UC26_PD14 (0b00)
#define PADSEL27_eMIOS_0_E0UC26_PG12 (0b01)
#define PADSEL28_eMIOS_0_E0UC27_PD15 (0b00)
#define PADSEL28_eMIOS_0_E0UC27_PG13 (0b01)

#define IRQ_EMIOS_0_GFR_F0_F1 (141)
#define IRQ_EMIOS_0_GFR_F2_F3 (142)
#define IRQ_EMIOS_0_GFR_F4_F5 (143)
#define IRQ_EMIOS_0_GFR_F6_F7 (144)
#define IRQ_EMIOS_0_GFR_F8_F9 (145)
#define IRQ_EMIOS_0_GFR_F10_F11 (146)
#define IRQ_EMIOS_0_GFR_F12_F13 (147)
#define IRQ_EMIOS_0_GFR_F14_F15 (148)
#define IRQ_EMIOS_0_GFR_F16_F17 (149)
#define IRQ_EMIOS_0_GFR_F18_F19 (150)
#define IRQ_EMIOS_0_GFR_F20_F21 (151)
#define IRQ_EMIOS_0_GFR_F22_F23 (152)
#define IRQ_EMIOS_0_GFR_F24_F25 (153)
#define IRQ_EMIOS_0_GFR_F26_F27 (154)


/* PIT */
#define IRQ_PITimer_Channel_0 (59)
#define IRQ_PITimer_Channel_1 (60)
#define IRQ_PITimer_Channel_2 (61)
#define IRQ_PITimer_Channel_3 (127)
#define IRQ_PITimer_Channel_4 (128)
#define IRQ_PITimer_Channel_5 (129)


/* I2C_0 */
#define PA10_AF2_SDA (0b10)
#define PA11_AF2_SCL (0b10)
#define PB2_AF2_SDA (0b10)
#define PB3_AF2_SCL (0b10)

#define PADSEL30_I2C_0_SDA_PA10 (0b00)
#define PADSEL30_I2C_0_SDA_PB2 (0b01)


/* LINFlex_0 */
#define PB2_AF1_LIN0TX (0b01)
#define PB3_AFN_LIN0RX (0b00)

#define IRQ_LINFlex_0_RXI (79)
#define IRQ_LINFlex_0_TXI (80)
#define IRQ_LINFlex_0_ERR (81)


/* LINFlex_1 */
#define PC6_AF1_LIN1TX (0b01)
#define PC7_AFN_LIN1RX (0b00)

#define IRQ_LINFlex_1_RXI (99)
#define IRQ_LINFlex_1_TXI (100)
#define IRQ_LINFlex_1_ERR (101)


/* LINFlex_2 */
#define PC8_AF1_LIN2TX (0b01)
#define PC9_AFN_LIN2RX (0b00)

#define IRQ_LINFlex_2_RXI (119)
#define IRQ_LINFlex_2_TXI (120)
#define IRQ_LINFlex_2_ERR (121)


/* LINFlex_3 */
#define PE10_AF1_LIN3TX (0b01)
#define PE11_AFN_LIN3RX (0b00)

#define PADSEL31_LINFlex_3_LIN3RX_PA8 (0b00)
#define PADSEL31_LINFlex_3_LIN3RX_PE11 (0b01)

#define IRQ_LINFlex_3_RXI (122)
#define IRQ_LINFlex_3_TXI (123)
#define IRQ_LINFlex_3_ERR (124)


#endif /* __BASE_H__ */
