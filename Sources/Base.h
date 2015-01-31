/*
 * Base.h
 *
 *  Created on: Aug 26, 2014
 *      Author: littlecat
 */

#ifndef __BASE_H__
#define __BASE_H__


/* Peripheral module to PSMI number */
#define PSMI_FlexCAN_1_CAN1RX (0)
#define PSMI_FlexCAN_2_CAN2RX (1)
#define PSMI_FlexCAN_3_CAN3RX (2)
#define PSMI_FlexCAN_4_CAN4RX (3)
#define PSMI_FlexCAN_5_CAN5RX (4)
#define PSMI_DSPI_0_SCK_0 (5)
#define PSMI_DSPI_0_CS0_0 (6)
#define PSMI_DSPI_1_SCK_1 (7)
#define PSMI_DSPI_1_SIN_1 (8)
#define PSMI_DSPI_1_CS0_1 (9)
#define PSMI_DSPI_2_SCK_2 (10)
#define PSMI_DSPI_2_SIN_2 (11)
#define PSMI_DSPI_2_CS0_2 (12)
#define PSMI_eMIOS_0_E1UC3 (13)
#define PSMI_eMIOS_0_E0UC4 (14)
#define PSMI_eMIOS_0_E0UC5 (15)
#define PSMI_eMIOS_0_E0UC6 (16)
#define PSMI_eMIOS_0_E0UC7 (17)
#define PSMI_eMIOS_0_E0UC10 (18)
#define PSMI_eMIOS_0_E0UC11 (19)
#define PSMI_eMIOS_0_E0UC12 (20)
#define PSMI_eMIOS_0_E0UC13 (21)
#define PSMI_eMIOS_0_E0UC14 (22)
#define PSMI_eMIOS_0_E0UC22 (23)
#define PSMI_eMIOS_0_E0UC23 (24)
#define PSMI_eMIOS_0_E0UC24 (25)
#define PSMI_eMIOS_0_E0UC25 (26)
#define PSMI_eMIOS_0_E0UC26 (27)
#define PSMI_eMIOS_0_E0UC27 (28)
#define PSMI_f_0_SCL (29)
#define PSMI_I2C_0_SDA (30)
#define PSMI_LINFlex_3_LIN3RX (31)


/* Peripheral module to PCR number */
#define PCR_ADC_ANS0_PB8 (24)
#define PCR_ADC_ANS1_PB9 (25)
#define PCR_ADC_ANS10_PF2 (82)
#define PCR_ADC_ANS11_PF3 (83)
#define PCR_ADC_ANS12_PF4 (84)
#define PCR_ADC_ANS13_PF5 (85)
#define PCR_ADC_ANS14_PF6 (86)
#define PCR_ADC_ANS15_PF7 (87)
#define PCR_ADC_ANS2_PB10 (26)
#define PCR_ADC_ANS3_PB11 (27)
#define PCR_ADC_ANS4_PD12 (60)
#define PCR_ADC_ANS5_PD13 (61)
#define PCR_ADC_ANS6_PD14 (62)
#define PCR_ADC_ANS7_PD15 (63)
#define PCR_ADC_ANS8_PF0 (80)
#define PCR_ADC_ANX0_PB12 (28)
#define PCR_ADC_ANX1_PB13 (29)
#define PCR_ADC_ANX2_PB14 (30)
#define PCR_ADC_ANX3_PB15 (31)
#define PCR_ADC_GPI0_PB4 (20)
#define PCR_ADC_GPI1_PB5 (21)
#define PCR_ADC_GPI10_PD6 (54)
#define PCR_ADC_GPI11_PD7 (55)
#define PCR_ADC_GPI12_PD8 (56)
#define PCR_ADC_GPI13_PD9 (57)
#define PCR_ADC_GPI14_PD10 (58)
#define PCR_ADC_GPI15_PD11 (59)
#define PCR_ADC_GPI2_PB6 (22)
#define PCR_ADC_GPI3_PB7 (23)
#define PCR_ADC_GPI4_PD0 (48)
#define PCR_ADC_GPI5_PD1 (49)
#define PCR_ADC_GPI6_PD2 (50)
#define PCR_ADC_GPI7_PD3 (51)
#define PCR_ADC_GPI8_PD4 (52)
#define PCR_ADC_GPI9_PD5 (53)
#define PCR_ADC_MA0_PC3 (35)
#define PCR_ADC_MA0_PE7 (71)
#define PCR_ADC_MA0_PH8 (120)
#define PCR_ADC_MA1_PC10 (42)
#define PCR_ADC_MA1_PE6 (70)
#define PCR_ADC_MA1_PH7 (119)
#define PCR_ADC_MA2_PE5 (69)
#define PCR_ADC_MA2_PH6 (118)
#define PCR_BAM_ABS0_PA8 (8)
#define PCR_BAM_FAB_PA9 (9)
#define PCR_CGL_CLKOUT_PA0 (0)
#define PCR_DSPI_0_CS0_0_PA14 (14)
#define PCR_DSPI_0_CS0_0_PA15 (15)
#define PCR_DSPI_0_CS0_0_PB11 (27)
#define PCR_DSPI_0_CS1_0_PB12 (28)
#define PCR_DSPI_0_CS2_0_PB13 (29)
#define PCR_DSPI_0_CS2_0_PE7 (71)
#define PCR_DSPI_0_CS3_0_PB14 (30)
#define PCR_DSPI_0_CS3_0_PE6 (70)
#define PCR_DSPI_0_CS4_0_PB15 (31)
#define PCR_DSPI_0_CS4_0_PF8 (88)
#define PCR_DSPI_0_CS5_0_PD12 (60)
#define PCR_DSPI_0_CS5_0_PF9 (89)
#define PCR_DSPI_0_SCK_0_PA14 (14)
#define PCR_DSPI_0_SCK_0_PA15 (15)
#define PCR_DSPI_0_SOUT_0_PA13 (13)
#define PCR_DSPI_1_CS0_1_PC3 (35)
#define PCR_DSPI_1_CS0_1_PD13 (61)
#define PCR_DSPI_1_CS0_1_PE5 (69)
#define PCR_DSPI_1_CS0_1_PH3 (115)
#define PCR_DSPI_1_CS1_1_PD14 (62)
#define PCR_DSPI_1_CS2_1_PD15 (63)
#define PCR_DSPI_1_CS3_1_PE10 (74)
#define PCR_DSPI_1_CS3_1_PF0 (80)
#define PCR_DSPI_1_CS4_1_PE11 (75)
#define PCR_DSPI_1_CS4_1_PF1 (81)
#define PCR_DSPI_1_SCK_1_PC2 (34)
#define PCR_DSPI_1_SCK_1_PE4 (68)
#define PCR_DSPI_1_SCK_1_PH2 (114)
#define PCR_DSPI_1_SIN_1_PC4 (36)
#define PCR_DSPI_1_SIN_1_PE2 (66)
#define PCR_DSPI_1_SIN_1_PH0 (112)
#define PCR_DSPI_1_SOUT_1_PC5 (37)
#define PCR_DSPI_1_SOUT_1_PE3 (67)
#define PCR_DSPI_1_SOUT_1_PH1 (113)
#define PCR_DSPI_2_CS0_2_PC15 (47)
#define PCR_DSPI_2_CS0_2_PE15 (79)
#define PCR_DSPI_2_CS0_2_PF2 (82)
#define PCR_DSPI_2_CS0_2_PG8 (104)
#define PCR_DSPI_2_CS1_2_PF3 (83)
#define PCR_DSPI_2_CS2_2_PF4 (84)
#define PCR_DSPI_2_CS2_2_PH8 (120)
#define PCR_DSPI_2_CS3_2_PF5 (85)
#define PCR_DSPI_2_CS3_2_PH7 (119)
#define PCR_DSPI_2_SCK_2_PC14 (46)
#define PCR_DSPI_2_SCK_2_PE14 (78)
#define PCR_DSPI_2_SCK_2_PG9 (105)
#define PCR_DSPI_2_SIN_2_PC12 (44)
#define PCR_DSPI_2_SIN_2_PE12 (76)
#define PCR_DSPI_2_SOUT_2_PC13 (45)
#define PCR_DSPI_2_SOUT_2_PE13 (77)
#define PCR_DSPI0_SIN_0_PA12 (12)
#define PCR_eMIOS_0_E0UC0_PA0 (0)
#define PCR_eMIOS_0_E0UC1_PA1 (1)
#define PCR_eMIOS_0_E0UC10_PA10 (10)
#define PCR_eMIOS_0_E0UC10_PF0 (80)
#define PCR_eMIOS_0_E0UC11_PA11 (11)
#define PCR_eMIOS_0_E0UC11_PF1 (81)
#define PCR_eMIOS_0_E0UC12_PC12 (44)
#define PCR_eMIOS_0_E0UC12_PF2 (82)
#define PCR_eMIOS_0_E0UC13_PC13 (45)
#define PCR_eMIOS_0_E0UC13_PF3 (83)
#define PCR_eMIOS_0_E0UC14_PC14 (46)
#define PCR_eMIOS_0_E0UC14_PF4 (84)
#define PCR_eMIOS_0_E0UC15_PC15 (47)
#define PCR_eMIOS_0_E0UC16_PE0 (64)
#define PCR_eMIOS_0_E0UC17_PE1 (65)
#define PCR_eMIOS_0_E0UC18_PE2 (66)
#define PCR_eMIOS_0_E0UC19_PE3 (67)
#define PCR_eMIOS_0_E0UC2_PA2 (2)
#define PCR_eMIOS_0_E0UC20_PE4 (68)
#define PCR_eMIOS_0_E0UC21_PE5 (69)
#define PCR_eMIOS_0_E0UC22_PE6 (70)
#define PCR_eMIOS_0_E0UC22_PE8 (72)
#define PCR_eMIOS_0_E0UC22_PF5 (85)
#define PCR_eMIOS_0_E0UC23_PE7 (71)
#define PCR_eMIOS_0_E0UC23_PE9 (73)
#define PCR_eMIOS_0_E0UC23_PF6 (86)
#define PCR_eMIOS_0_E0UC24_PD12 (60)
#define PCR_eMIOS_0_E0UC24_PG10 (106)
#define PCR_eMIOS_0_E0UC25_PD13 (61)
#define PCR_eMIOS_0_E0UC25_PG11 (107)
#define PCR_eMIOS_0_E0UC26_PD14 (62)
#define PCR_eMIOS_0_E0UC26_PG12 (108)
#define PCR_eMIOS_0_E0UC27_PD15 (63)
#define PCR_eMIOS_0_E0UC27_PG13 (109)
#define PCR_eMIOS_0_E0UC3_PA3 (3)
#define PCR_eMIOS_0_E0UC3_PB11 (27)
#define PCR_eMIOS_0_E0UC4_PA4 (4)
#define PCR_eMIOS_0_E0UC4_PB12 (28)
#define PCR_eMIOS_0_E0UC5_PA5 (5)
#define PCR_eMIOS_0_E0UC5_PB13 (29)
#define PCR_eMIOS_0_E0UC6_PA6 (6)
#define PCR_eMIOS_0_E0UC6_PB14 (30)
#define PCR_eMIOS_0_E0UC7_PA7 (7)
#define PCR_eMIOS_0_E0UC7_PB15 (31)
#define PCR_eMIOS_0_E0UC8_PA8 (8)
#define PCR_eMIOS_0_E0UC9_PA9 (9)
#define PCR_eMIOS_1_E1UC0_PG14 (110)
#define PCR_eMIOS_1_E1UC1_PG15 (111)
#define PCR_eMIOS_1_E1UC10_PH8 (120)
#define PCR_eMIOS_1_E1UC11_PG2 (98)
#define PCR_eMIOS_1_E1UC12_PG3 (99)
#define PCR_eMIOS_1_E1UC13_PG4 (100)
#define PCR_eMIOS_1_E1UC14_PG5 (101)
#define PCR_eMIOS_1_E1UC15_PG6 (102)
#define PCR_eMIOS_1_E1UC16_PG7 (103)
#define PCR_eMIOS_1_E1UC17_PG8 (104)
#define PCR_eMIOS_1_E1UC18_PG9 (105)
#define PCR_eMIOS_1_E1UC19_PE12 (76)
#define PCR_eMIOS_1_E1UC2_PH0 (112)
#define PCR_eMIOS_1_E1UC20_PE13 (77)
#define PCR_eMIOS_1_E1UC21_PE14 (78)
#define PCR_eMIOS_1_E1UC22_PE15 (79)
#define PCR_eMIOS_1_E1UC23_PG0 (96)
#define PCR_eMIOS_1_E1UC24_PG1 (97)
#define PCR_eMIOS_1_E1UC25_PF12 (92)
#define PCR_eMIOS_1_E1UC26_PF13 (93)
#define PCR_eMIOS_1_E1UC27_PF14 (94)
#define PCR_eMIOS_1_E1UC3_PH1 (113)
#define PCR_eMIOS_1_E1UC4_PH2 (114)
#define PCR_eMIOS_1_E1UC5_PH3 (115)
#define PCR_eMIOS_1_E1UC6_PH4 (116)
#define PCR_eMIOS_1_E1UC7_PH5 (117)
#define PCR_eMIOS_1_E1UC8_PH6 (118)
#define PCR_eMIOS_1_E1UC9_PH7 (119)
#define PCR_FlexCAN_0_CAN0RX_PB1 (17)
#define PCR_FlexCAN_0_CAN0TX_PB0 (16)
#define PCR_FlexCAN_1_CAN1RX_PC11 (43)
#define PCR_FlexCAN_1_CAN1RX_PC3 (35)
#define PCR_FlexCAN_1_CAN1RX_PF15 (95)
#define PCR_FlexCAN_1_CAN1TX_PC10 (42)
#define PCR_FlexCAN_2_CAN2RX_PE9 (73)
#define PCR_FlexCAN_2_CAN2RX_PF9 (89)
#define PCR_FlexCAN_2_CAN2TX_PE8 (72)
#define PCR_FlexCAN_2_CAN2TX_PF8 (88)
#define PCR_FlexCAN_3_CAN3RX_PC4 (36)
#define PCR_FlexCAN_3_CAN3RX_PE9 (73)
#define PCR_FlexCAN_3_CAN3RX_PF9 (89)
#define PCR_FlexCAN_3_CAN3TX_PC5 (37)
#define PCR_FlexCAN_3_CAN3TX_PE8 (72)
#define PCR_FlexCAN_3_CAN3TX_PF8 (88)
#define PCR_FlexCAN_4_CAN1TX_PF14 (94)
#define PCR_FlexCAN_4_CAN4RX_PC11 (43)
#define PCR_FlexCAN_4_CAN4RX_PC3 (35)
#define PCR_FlexCAN_4_CAN4RX_PF15 (95)
#define PCR_FlexCAN_4_CAN4TX_PC10 (42)
#define PCR_FlexCAN_4_CAN4TX_PF14 (94)
#define PCR_FlexCAN_5_CAN5RX_PE0 (64)
#define PCR_FlexCAN_5_CAN5RX_PG1 (97)
#define PCR_FlexCAN_5_CAN5TX_PE1 (65)
#define PCR_FlexCAN_5_CAN5TX_PG0 (96)
#define PCR_I_ANS9_PF1 (81)
#define PCR_I2C_0_SCL_PA11 (11)
#define PCR_I2C_0_SCL_PB3 (19)
#define PCR_I2C_0_SDA_PA10 (10)
#define PCR_I2C_0_SDA_PB2 (18)
#define PCR_JTAGC_TCK_PH9 (121)
#define PCR_JTAGC_TDI_PC0 (32)
#define PCR_JTAGC_TDO_PC1 (33)
#define PCR_JTAGC_TMS_PH10 (122)
#define PCR_LINFlex_0_LIN0RX_PB3 (19)
#define PCR_LINFlex_0_LIN0TX_PB2 (18)
#define PCR_LINFlex_1_LIN1RX_PC7 (39)
#define PCR_LINFlex_1_LIN1TX_PC6 (38)
#define PCR_LINFlex_2_LIN2RX_PC9 (41)
#define PCR_LINFlex_2_LIN2TX_PC8 (40)
#define PCR_LINFlex_3_LIN3RX_PA8 (8)
#define PCR_LINFlex_3_LIN3RX_PE11 (75)
#define PCR_LINFlex_3_LIN3TX_PA7 (7)
#define PCR_LINFlex_3_LIN3TX_PE10 (74)
#define PCR_LINFlex_4_CAN4TX_PC2 (34)
#define PCR_SIUL_EIRQ0_PA3 (3)
#define PCR_SIUL_EIRQ1_PA6 (6)
#define PCR_SIUL_EIRQ10_PE10 (74)
#define PCR_SIUL_EIRQ11_PE12 (76)
#define PCR_SIUL_EIRQ12_PE14 (78)
#define PCR_SIUL_EIRQ13_PF15 (95)
#define PCR_SIUL_EIRQ14_PG1 (97)
#define PCR_SIUL_EIRQ15_PG8 (104)
#define PCR_SIUL_EIRQ2_PA7 (7)
#define PCR_SIUL_EIRQ3_PA8 (8)
#define PCR_SIUL_EIRQ4_PA14 (14)
#define PCR_SIUL_EIRQ5_PC2 (34)
#define PCR_SIUL_EIRQ6_PC3 (35)
#define PCR_SIUL_EIRQ7_PC5 (37)
#define PCR_SIUL_EIRQ8_PC14 (46)
#define PCR_SIUL_EIRQ9_PE4 (68)
#define PCR_SIUL_GPIO0_PA0 (0)
#define PCR_SIUL_GPIO1_PA1 (1)
#define PCR_SIUL_GPIO10_PA10 (10)
#define PCR_SIUL_GPIO100_PG4 (100)
#define PCR_SIUL_GPIO101_PG5 (101)
#define PCR_SIUL_GPIO102_PG6 (102)
#define PCR_SIUL_GPIO103_PG7 (103)
#define PCR_SIUL_GPIO104_PG8 (104)
#define PCR_SIUL_GPIO105_PG9 (105)
#define PCR_SIUL_GPIO106_PG10 (106)
#define PCR_SIUL_GPIO107_PG11 (107)
#define PCR_SIUL_GPIO108_PG12 (108)
#define PCR_SIUL_GPIO109_PG13 (109)
#define PCR_SIUL_GPIO11_PA11 (11)
#define PCR_SIUL_GPIO110_PG14 (110)
#define PCR_SIUL_GPIO111_PG15 (111)
#define PCR_SIUL_GPIO112_PH0 (112)
#define PCR_SIUL_GPIO113_PH1 (113)
#define PCR_SIUL_GPIO114_PH2 (114)
#define PCR_SIUL_GPIO115_PH3 (115)
#define PCR_SIUL_GPIO116_PH4 (116)
#define PCR_SIUL_GPIO117_PH5 (117)
#define PCR_SIUL_GPIO118_PH6 (118)
#define PCR_SIUL_GPIO119_PH7 (119)
#define PCR_SIUL_GPIO12_PA12 (12)
#define PCR_SIUL_GPIO120_PH8 (120)
#define PCR_SIUL_GPIO121_PH9 (121)
#define PCR_SIUL_GPIO122_PH10 (122)
#define PCR_SIUL_GPIO13_PA13 (13)
#define PCR_SIUL_GPIO14_PA14 (14)
#define PCR_SIUL_GPIO15_PA15 (15)
#define PCR_SIUL_GPIO16_PB0 (16)
#define PCR_SIUL_GPIO17_PB1 (17)
#define PCR_SIUL_GPIO18_PB2 (18)
#define PCR_SIUL_GPIO19_PB3 (19)
#define PCR_SIUL_GPIO2_PA2 (2)
#define PCR_SIUL_GPIO20_PB4 (20)
#define PCR_SIUL_GPIO21_PB5 (21)
#define PCR_SIUL_GPIO22_PB6 (22)
#define PCR_SIUL_GPIO23_PB7 (23)
#define PCR_SIUL_GPIO24_PB8 (24)
#define PCR_SIUL_GPIO25_PB9 (25)
#define PCR_SIUL_GPIO26_PB10 (26)
#define PCR_SIUL_GPIO27_PB11 (27)
#define PCR_SIUL_GPIO28_PB12 (28)
#define PCR_SIUL_GPIO29_PB13 (29)
#define PCR_SIUL_GPIO3_PA3 (3)
#define PCR_SIUL_GPIO30_PB14 (30)
#define PCR_SIUL_GPIO31_PB15 (31)
#define PCR_SIUL_GPIO32_PC0 (32)
#define PCR_SIUL_GPIO33_PC1 (33)
#define PCR_SIUL_GPIO34_PC2 (34)
#define PCR_SIUL_GPIO35_PC3 (35)
#define PCR_SIUL_GPIO36_PC4 (36)
#define PCR_SIUL_GPIO37_PC5 (37)
#define PCR_SIUL_GPIO38_PC6 (38)
#define PCR_SIUL_GPIO39_PC7 (39)
#define PCR_SIUL_GPIO4_PA4 (4)
#define PCR_SIUL_GPIO40_PC8 (40)
#define PCR_SIUL_GPIO41_PC9 (41)
#define PCR_SIUL_GPIO42_PC10 (42)
#define PCR_SIUL_GPIO43_PC11 (43)
#define PCR_SIUL_GPIO44_PC12 (44)
#define PCR_SIUL_GPIO45_PC13 (45)
#define PCR_SIUL_GPIO46_PC14 (46)
#define PCR_SIUL_GPIO47_PC15 (47)
#define PCR_SIUL_GPIO48_PD0 (48)
#define PCR_SIUL_GPIO49_PD1 (49)
#define PCR_SIUL_GPIO5_PA5 (5)
#define PCR_SIUL_GPIO50_PD2 (50)
#define PCR_SIUL_GPIO51_PD3 (51)
#define PCR_SIUL_GPIO52_PD4 (52)
#define PCR_SIUL_GPIO53_PD5 (53)
#define PCR_SIUL_GPIO54_PD6 (54)
#define PCR_SIUL_GPIO55_PD7 (55)
#define PCR_SIUL_GPIO56_PD8 (56)
#define PCR_SIUL_GPIO57_PD9 (57)
#define PCR_SIUL_GPIO58_PD10 (58)
#define PCR_SIUL_GPIO59_PD11 (59)
#define PCR_SIUL_GPIO6_PA6 (6)
#define PCR_SIUL_GPIO60_PD12 (60)
#define PCR_SIUL_GPIO61_PD13 (61)
#define PCR_SIUL_GPIO62_PD14 (62)
#define PCR_SIUL_GPIO63_PD15 (63)
#define PCR_SIUL_GPIO64_PE0 (64)
#define PCR_SIUL_GPIO65_PE1 (65)
#define PCR_SIUL_GPIO66_PE2 (66)
#define PCR_SIUL_GPIO67_PE3 (67)
#define PCR_SIUL_GPIO68_PE4 (68)
#define PCR_SIUL_GPIO69_PE5 (69)
#define PCR_SIUL_GPIO7_PA7 (7)
#define PCR_SIUL_GPIO70_PE6 (70)
#define PCR_SIUL_GPIO71_PE7 (71)
#define PCR_SIUL_GPIO72_PE8 (72)
#define PCR_SIUL_GPIO73_PE9 (73)
#define PCR_SIUL_GPIO74_PE10 (74)
#define PCR_SIUL_GPIO75_PE11 (75)
#define PCR_SIUL_GPIO76_PE12 (76)
#define PCR_SIUL_GPIO77_PE13 (77)
#define PCR_SIUL_GPIO78_PE14 (78)
#define PCR_SIUL_GPIO79_PE15 (79)
#define PCR_SIUL_GPIO8_PA8 (8)
#define PCR_SIUL_GPIO80_PF0 (80)
#define PCR_SIUL_GPIO81_PF1 (81)
#define PCR_SIUL_GPIO82_PF2 (82)
#define PCR_SIUL_GPIO83_PF3 (83)
#define PCR_SIUL_GPIO84_PF4 (84)
#define PCR_SIUL_GPIO85_PF5 (85)
#define PCR_SIUL_GPIO86_PF6 (86)
#define PCR_SIUL_GPIO87_PF7 (87)
#define PCR_SIUL_GPIO88_PF8 (88)
#define PCR_SIUL_GPIO89_PF9 (89)
#define PCR_SIUL_GPIO9_PA9 (9)
#define PCR_SIUL_GPIO90_PF10 (90)
#define PCR_SIUL_GPIO91_PF11 (91)
#define PCR_SIUL_GPIO92_PF12 (92)
#define PCR_SIUL_GPIO93_PF13 (93)
#define PCR_SIUL_GPIO94_PF14 (94)
#define PCR_SIUL_GPIO95_PF15 (95)
#define PCR_SIUL_GPIO96_PG0 (96)
#define PCR_SIUL_GPIO97_PG1 (97)
#define PCR_SIUL_GPIO98_PG2 (98)
#define PCR_SIUL_GPIO99_PG3 (99)
#define PCR_SXOSC_OSC32K_EXTAL_PB9 (25)
#define PCR_SXOSC_OSC32K_XTAL_PB8 (24)
#define PCR_WKPU_NMI_PA1 (1)
#define PCR_WKPU_WKUP10_PA15 (15)
#define PCR_WKPU_WKUP11_PB3 (19)
#define PCR_WKPU_WKUP12_PC7 (39)
#define PCR_WKPU_WKUP13_PC9 (41)
#define PCR_WKPU_WKUP14_PE11 (75)
#define PCR_WKPU_WKUP15_PF11 (91)
#define PCR_WKPU_WKUP16_PF13 (93)
#define PCR_WKPU_WKUP17_PG3 (99)
#define PCR_WKPU_WKUP18_PG5 (101)
#define PCR_WKPU_WKUP19_PA0 (0)
#define PCR_WKPU_WKUP2_PA1 (1)
#define PCR_WKPU_WKUP3_PA2 (2)
#define PCR_WKPU_WKUP4_PB1 (17)
#define PCR_WKPU_WKUP5_PC11 (43)
#define PCR_WKPU_WKUP6_PE0 (64)
#define PCR_WKPU_WKUP7_PE9 (73)
#define PCR_WKPU_WKUP8_PB10 (26)
#define PCR_WKPU_WKUP9_PA4 (4)


/* Peripheral module to Alternate function */
#define AF_SIUL_GPIO0_PA0 (0)
#define AF_eMIOS_0_E0UC0_PA0 (1)
#define AF_CGL_CLKOUT_PA0 (2)
#define AF_SIUL_GPIO1_PA1 (0)
#define AF_eMIOS_0_E0UC1_PA1 (1)
#define AF_SIUL_GPIO2_PA2 (0)
#define AF_eMIOS_0_E0UC2_PA2 (1)
#define AF_SIUL_GPIO3_PA3 (0)
#define AF_eMIOS_0_E0UC3_PA3 (1)
#define AF_SIUL_GPIO4_PA4 (0)
#define AF_eMIOS_0_E0UC4_PA4 (1)
#define AF_SIUL_GPIO5_PA5 (0)
#define AF_eMIOS_0_E0UC5_PA5 (1)
#define AF_SIUL_GPIO6_PA6 (0)
#define AF_eMIOS_0_E0UC6_PA6 (1)
#define AF_SIUL_GPIO7_PA7 (0)
#define AF_eMIOS_0_E0UC7_PA7 (1)
#define AF_LINFlex_3_LIN3TX_PA7 (2)
#define AF_SIUL_GPIO8_PA8 (0)
#define AF_eMIOS_0_E0UC8_PA8 (1)
#define AF_SIUL_GPIO9_PA9 (0)
#define AF_eMIOS_0_E0UC9_PA9 (1)
#define AF_SIUL_GPIO10_PA10 (0)
#define AF_eMIOS_0_E0UC10_PA10 (1)
#define AF_I2C_0_SDA_PA10 (2)
#define AF_SIUL_GPIO11_PA11 (0)
#define AF_eMIOS_0_E0UC11_PA11 (1)
#define AF_I2C_0_SCL_PA11 (2)
#define AF_SIUL_GPIO12_PA12 (0)
#define AF_SIUL_GPIO13_PA13 (0)
#define AF_DSPI_0_SOUT_0_PA13 (1)
#define AF_SIUL_GPIO14_PA14 (0)
#define AF_DSPI_0_SCK_0_PA14 (1)
#define AF_DSPI_0_CS0_0_PA14 (2)
#define AF_SIUL_GPIO15_PA15 (0)
#define AF_DSPI_0_CS0_0_PA15 (1)
#define AF_DSPI_0_SCK_0_PA15 (2)
#define AF_SIUL_GPIO16_PB0 (0)
#define AF_FlexCAN_0_CAN0TX_PB0 (1)
#define AF_SIUL_GPIO17_PB1 (0)
#define AF_SIUL_GPIO18_PB2 (0)
#define AF_LINFlex_0_LIN0TX_PB2 (1)
#define AF_I2C_0_SDA_PB2 (2)
#define AF_SIUL_GPIO19_PB3 (0)
#define AF_I2C_0_SCL_PB3 (2)
#define AF_SIUL_GPIO20_PB4 (0)
#define AF_SIUL_GPIO21_PB5 (0)
#define AF_SIUL_GPIO22_PB6 (0)
#define AF_SIUL_GPIO23_PB7 (0)
#define AF_SIUL_GPIO24_PB8 (0)
#define AF_SIUL_GPIO25_PB9 (0)
#define AF_SIUL_GPIO26_PB10 (0)
#define AF_SIUL_GPIO27_PB11 (0)
#define AF_eMIOS_0_E0UC3_PB11 (1)
#define AF_DSPI_0_CS0_0_PB11 (3)
#define AF_SIUL_GPIO28_PB12 (0)
#define AF_eMIOS_0_E0UC4_PB12 (1)
#define AF_DSPI_0_CS1_0_PB12 (3)
#define AF_SIUL_GPIO29_PB13 (0)
#define AF_eMIOS_0_E0UC5_PB13 (1)
#define AF_DSPI_0_CS2_0_PB13 (3)
#define AF_SIUL_GPIO30_PB14 (0)
#define AF_eMIOS_0_E0UC6_PB14 (1)
#define AF_DSPI_0_CS3_0_PB14 (3)
#define AF_SIUL_GPIO31_PB15 (0)
#define AF_eMIOS_0_E0UC7_PB15 (1)
#define AF_DSPI_0_CS4_0_PB15 (3)
#define AF_SIUL_GPIO32_PC0 (0)
#define AF_JTAGC_TDI_PC0 (2)
#define AF_SIUL_GPIO33_PC1 (0)
#define AF_JTAGC_TDO_PC1 (2)
#define AF_SIUL_GPIO34_PC2 (0)
#define AF_DSPI_1_SCK_1_PC2 (1)
#define AF_LINFlex_4_CAN4TX_PC2 (2)
#define AF_SIUL_GPIO35_PC3 (0)
#define AF_DSPI_1_CS0_1_PC3 (1)
#define AF_ADC_MA0_PC3 (2)
#define AF_SIUL_GPIO36_PC4 (0)
#define AF_SIUL_GPIO37_PC5 (0)
#define AF_DSPI_1_SOUT_1_PC5 (1)
#define AF_FlexCAN_3_CAN3TX_PC5 (2)
#define AF_SIUL_GPIO38_PC6 (0)
#define AF_LINFlex_1_LIN1TX_PC6 (1)
#define AF_SIUL_GPIO39_PC7 (0)
#define AF_SIUL_GPIO40_PC8 (0)
#define AF_LINFlex_2_LIN2TX_PC8 (1)
#define AF_SIUL_GPIO41_PC9 (0)
#define AF_SIUL_GPIO42_PC10 (0)
#define AF_FlexCAN_1_CAN1TX_PC10 (1)
#define AF_FlexCAN_4_CAN4TX_PC10 (2)
#define AF_ADC_MA1_PC10 (3)
#define AF_SIUL_GPIO43_PC11 (0)
#define AF_SIUL_GPIO44_PC12 (0)
#define AF_eMIOS_0_E0UC12_PC12 (1)
#define AF_SIUL_GPIO45_PC13 (0)
#define AF_eMIOS_0_E0UC13_PC13 (1)
#define AF_DSPI_2_SOUT_2_PC13 (2)
#define AF_SIUL_GPIO46_PC14 (0)
#define AF_eMIOS_0_E0UC14_PC14 (1)
#define AF_DSPI_2_SCK_2_PC14 (2)
#define AF_SIUL_GPIO47_PC15 (0)
#define AF_eMIOS_0_E0UC15_PC15 (1)
#define AF_DSPI_2_CS0_2_PC15 (2)
#define AF_SIUL_GPIO48_PD0 (0)
#define AF_SIUL_GPIO49_PD1 (0)
#define AF_SIUL_GPIO50_PD2 (0)
#define AF_SIUL_GPIO51_PD3 (0)
#define AF_SIUL_GPIO52_PD4 (0)
#define AF_SIUL_GPIO53_PD5 (0)
#define AF_SIUL_GPIO54_PD6 (0)
#define AF_SIUL_GPIO55_PD7 (0)
#define AF_SIUL_GPIO56_PD8 (0)
#define AF_SIUL_GPIO57_PD9 (0)
#define AF_SIUL_GPIO58_PD10 (0)
#define AF_SIUL_GPIO59_PD11 (0)
#define AF_SIUL_GPIO60_PD12 (0)
#define AF_DSPI_0_CS5_0_PD12 (1)
#define AF_eMIOS_0_E0UC24_PD12 (2)
#define AF_SIUL_GPIO61_PD13 (0)
#define AF_DSPI_1_CS0_1_PD13 (1)
#define AF_eMIOS_0_E0UC25_PD13 (2)
#define AF_SIUL_GPIO62_PD14 (0)
#define AF_DSPI_1_CS1_1_PD14 (1)
#define AF_eMIOS_0_E0UC26_PD14 (2)
#define AF_SIUL_GPIO63_PD15 (0)
#define AF_DSPI_1_CS2_1_PD15 (1)
#define AF_eMIOS_0_E0UC27_PD15 (2)
#define AF_SIUL_GPIO64_PE0 (0)
#define AF_eMIOS_0_E0UC16_PE0 (1)
#define AF_SIUL_GPIO65_PE1 (0)
#define AF_eMIOS_0_E0UC17_PE1 (1)
#define AF_FlexCAN_5_CAN5TX_PE1 (2)
#define AF_SIUL_GPIO66_PE2 (0)
#define AF_eMIOS_0_E0UC18_PE2 (1)
#define AF_SIUL_GPIO67_PE3 (0)
#define AF_eMIOS_0_E0UC19_PE3 (1)
#define AF_DSPI_1_SOUT_1_PE3 (2)
#define AF_SIUL_GPIO68_PE4 (0)
#define AF_eMIOS_0_E0UC20_PE4 (1)
#define AF_DSPI_1_SCK_1_PE4 (2)
#define AF_SIUL_GPIO69_PE5 (0)
#define AF_eMIOS_0_E0UC21_PE5 (1)
#define AF_DSPI_1_CS0_1_PE5 (2)
#define AF_ADC_MA2_PE5 (3)
#define AF_SIUL_GPIO70_PE6 (0)
#define AF_eMIOS_0_E0UC22_PE6 (1)
#define AF_DSPI_0_CS3_0_PE6 (2)
#define AF_ADC_MA1_PE6 (3)
#define AF_SIUL_GPIO71_PE7 (0)
#define AF_eMIOS_0_E0UC23_PE7 (1)
#define AF_DSPI_0_CS2_0_PE7 (2)
#define AF_ADC_MA0_PE7 (3)
#define AF_SIUL_GPIO72_PE8 (0)
#define AF_FlexCAN_2_CAN2TX_PE8 (1)
#define AF_eMIOS_0_E0UC22_PE8 (2)
#define AF_FlexCAN_3_CAN3TX_PE8 (3)
#define AF_SIUL_GPIO73_PE9 (0)
#define AF_eMIOS_0_E0UC23_PE9 (2)
#define AF_SIUL_GPIO74_PE10 (0)
#define AF_LINFlex_3_LIN3TX_PE10 (1)
#define AF_DSPI_1_CS3_1_PE10 (2)
#define AF_SIUL_GPIO75_PE11 (0)
#define AF_DSPI_1_CS4_1_PE11 (2)
#define AF_SIUL_GPIO76_PE12 (0)
#define AF_eMIOS_1_E1UC19_PE12 (2)
#define AF_SIUL_GPIO77_PE13 (0)
#define AF_DSPI_2_SOUT_2_PE13 (1)
#define AF_eMIOS_1_E1UC20_PE13 (2)
#define AF_SIUL_GPIO78_PE14 (0)
#define AF_DSPI_2_SCK_2_PE14 (1)
#define AF_eMIOS_1_E1UC21_PE14 (2)
#define AF_SIUL_GPIO79_PE15 (0)
#define AF_DSPI_2_CS0_2_PE15 (1)
#define AF_eMIOS_1_E1UC22_PE15 (2)
#define AF_SIUL_GPIO80_PF0 (0)
#define AF_eMIOS_0_E0UC10_PF0 (1)
#define AF_DSPI_1_CS3_1_PF0 (2)
#define AF_SIUL_GPIO81_PF1 (0)
#define AF_eMIOS_0_E0UC11_PF1 (1)
#define AF_DSPI_1_CS4_1_PF1 (2)
#define AF_SIUL_GPIO82_PF2 (0)
#define AF_eMIOS_0_E0UC12_PF2 (1)
#define AF_DSPI_2_CS0_2_PF2 (2)
#define AF_SIUL_GPIO83_PF3 (0)
#define AF_eMIOS_0_E0UC13_PF3 (1)
#define AF_DSPI_2_CS1_2_PF3 (2)
#define AF_SIUL_GPIO84_PF4 (0)
#define AF_eMIOS_0_E0UC14_PF4 (1)
#define AF_DSPI_2_CS2_2_PF4 (2)
#define AF_SIUL_GPIO85_PF5 (0)
#define AF_eMIOS_0_E0UC22_PF5 (1)
#define AF_DSPI_2_CS3_2_PF5 (2)
#define AF_SIUL_GPIO86_PF6 (0)
#define AF_eMIOS_0_E0UC23_PF6 (1)
#define AF_SIUL_GPIO87_PF7 (0)
#define AF_SIUL_GPIO88_PF8 (0)
#define AF_FlexCAN_3_CAN3TX_PF8 (1)
#define AF_DSPI_0_CS4_0_PF8 (2)
#define AF_FlexCAN_2_CAN2TX_PF8 (3)
#define AF_SIUL_GPIO89_PF9 (0)
#define AF_DSPI_0_CS5_0_PF9 (2)
#define AF_SIUL_GPIO90_PF10 (0)
#define AF_SIUL_GPIO91_PF11 (0)
#define AF_SIUL_GPIO92_PF12 (0)
#define AF_eMIOS_1_E1UC25_PF12 (1)
#define AF_SIUL_GPIO93_PF13 (0)
#define AF_eMIOS_1_E1UC26_PF13 (1)
#define AF_SIUL_GPIO94_PF14 (0)
#define AF_FlexCAN_4_CAN4TX_PF14 (1)
#define AF_eMIOS_1_E1UC27_PF14 (2)
#define AF_FlexCAN_4_CAN1TX_PF14 (3)
#define AF_SIUL_GPIO95_PF15 (0)
#define AF_SIUL_GPIO96_PG0 (0)
#define AF_FlexCAN_5_CAN5TX_PG0 (1)
#define AF_eMIOS_1_E1UC23_PG0 (2)
#define AF_SIUL_GPIO97_PG1 (0)
#define AF_eMIOS_1_E1UC24_PG1 (2)
#define AF_SIUL_GPIO98_PG2 (0)
#define AF_eMIOS_1_E1UC11_PG2 (1)
#define AF_SIUL_GPIO99_PG3 (0)
#define AF_eMIOS_1_E1UC12_PG3 (1)
#define AF_SIUL_GPIO100_PG4 (0)
#define AF_eMIOS_1_E1UC13_PG4 (1)
#define AF_SIUL_GPIO101_PG5 (0)
#define AF_eMIOS_1_E1UC14_PG5 (1)
#define AF_SIUL_GPIO102_PG6 (0)
#define AF_eMIOS_1_E1UC15_PG6 (1)
#define AF_SIUL_GPIO103_PG7 (0)
#define AF_eMIOS_1_E1UC16_PG7 (1)
#define AF_SIUL_GPIO104_PG8 (0)
#define AF_eMIOS_1_E1UC17_PG8 (1)
#define AF_DSPI_2_CS0_2_PG8 (3)
#define AF_SIUL_GPIO105_PG9 (0)
#define AF_eMIOS_1_E1UC18_PG9 (1)
#define AF_DSPI_2_SCK_2_PG9 (3)
#define AF_SIUL_GPIO106_PG10 (0)
#define AF_eMIOS_0_E0UC24_PG10 (1)
#define AF_SIUL_GPIO107_PG11 (0)
#define AF_eMIOS_0_E0UC25_PG11 (1)
#define AF_SIUL_GPIO108_PG12 (0)
#define AF_eMIOS_0_E0UC26_PG12 (1)
#define AF_SIUL_GPIO109_PG13 (0)
#define AF_eMIOS_0_E0UC27_PG13 (1)
#define AF_SIUL_GPIO110_PG14 (0)
#define AF_eMIOS_1_E1UC0_PG14 (1)
#define AF_SIUL_GPIO111_PG15 (0)
#define AF_eMIOS_1_E1UC1_PG15 (1)
#define AF_SIUL_GPIO112_PH0 (0)
#define AF_eMIOS_1_E1UC2_PH0 (1)
#define AF_SIUL_GPIO113_PH1 (0)
#define AF_eMIOS_1_E1UC3_PH1 (1)
#define AF_DSPI_1_SOUT_1_PH1 (2)
#define AF_SIUL_GPIO114_PH2 (0)
#define AF_eMIOS_1_E1UC4_PH2 (1)
#define AF_DSPI_1_SCK_1_PH2 (2)
#define AF_SIUL_GPIO115_PH3 (0)
#define AF_eMIOS_1_E1UC5_PH3 (1)
#define AF_DSPI_1_CS0_1_PH3 (2)
#define AF_SIUL_GPIO116_PH4 (0)
#define AF_eMIOS_1_E1UC6_PH4 (1)
#define AF_SIUL_GPIO117_PH5 (0)
#define AF_eMIOS_1_E1UC7_PH5 (1)
#define AF_SIUL_GPIO118_PH6 (0)
#define AF_eMIOS_1_E1UC8_PH6 (1)
#define AF_ADC_MA2_PH6 (3)
#define AF_SIUL_GPIO119_PH7 (0)
#define AF_eMIOS_1_E1UC9_PH7 (1)
#define AF_DSPI_2_CS3_2_PH7 (2)
#define AF_ADC_MA1_PH7 (3)
#define AF_SIUL_GPIO120_PH8 (0)
#define AF_eMIOS_1_E1UC10_PH8 (1)
#define AF_DSPI_2_CS2_2_PH8 (2)
#define AF_ADC_MA0_PH8 (3)
#define AF_SIUL_GPIO121_PH9 (0)
#define AF_JTAGC_TCK_PH9 (2)
#define AF_SIUL_GPIO122_PH10 (0)
#define AF_JTAGC_TMS_PH10 (2)


/* Peripheral module to IRQ */
#define IRQ_Software_Software_configurable_flag_0 (0)
#define IRQ_Software_Software_configurable_flag_1 (1)
#define IRQ_Software_Software_configurable_flag_2 (2)
#define IRQ_Software_Software_configurable_flag_3 (3)
#define IRQ_Software_Software_configurable_flag_4 (4)
#define IRQ_Software_Software_configurable_flag_5 (5)
#define IRQ_Software_Software_configurable_flag_6 (6)
#define IRQ_Software_Software_configurable_flag_7 (7)
#define IRQ_ECSM_Platform_Flash_Bank_0_Abort_OR_Platform_Flash_Bank_0_Stall_OR_Platform_Flash_Bank_1_Abort_OR_Platform_Flash_Bank_1_Stall_OR (9)
#define IRQ_SWT_Timeout (28)
#define IRQ_STM_Match_on_channel_0 (30)
#define IRQ_STM_Match_on_channel_1 (31)
#define IRQ_STM_Match_on_channel_2 (32)
#define IRQ_STM_Match_on_channel_3 (33)
#define IRQ_Platform_ECC_Double_Bit_Detection_ECC_DBD_PlatformFlash_OR_ECC_DBD_PlatformRAM (35)
#define IRQ_Platform_ECC_Single_Bit_Correction_ECC_SBC_PlatformFlash_OR_ECC_SBC_PlatformRAM (36)
#define IRQ_RTC_OR_API_RTC (38)
#define IRQ_RTC_OR_API_API (39)
#define IRQ_SIUL_SIU_External_IRQ_0 (41)
#define IRQ_SIUL_SIU_External_IRQ_1 (42)
#define IRQ_WKPU_WakeUp_IRQ_0 (46)
#define IRQ_WKPU_WakeUp_IRQ_1 (47)
#define IRQ_WKPU_WakeUp_IRQ_2 (48)
#define IRQ_MC_ME_Safe_Mode_Interrupt (51)
#define IRQ_MC_ME_Mode_Transition_Interrupt (52)
#define IRQ_MC_ME_Invalid_Mode_Interrupt (53)
#define IRQ_MC_ME_Invalid_Mode_Config (54)
#define IRQ_MC_RGM_Functional_and_destructive_reset_alternate_event_interrupt_ipi_int (56)
#define IRQ_FXOSC_FXOSC_counter_expired_ipi_int_osc (57)
#define IRQ_PIT_PITimer_Channel_0 (59)
#define IRQ_PIT_PITimer_Channel_1 (60)
#define IRQ_PIT_PITimer_Channel_2 (61)
#define IRQ_ADC_0_ADC_EOC (62)
#define IRQ_ADC_0_ADC_ER (63)
#define IRQ_ADC_0_ADC_WD (64)
#define IRQ_FlexCAN_0_FlexCAN_ESR_ERR_INT (65)
#define IRQ_FlexCAN_0_FlexCAN_ESR_BOFF_OR_FlexCAN_Transmit_Warning_OR_FlexCAN_Receive_Warning (66)
#define IRQ_FlexCAN_0_FlexCAN_BUF_00_03 (68)
#define IRQ_FlexCAN_0_FlexCAN_BUF_04_07 (69)
#define IRQ_FlexCAN_0_FlexCAN_BUF_08_11 (70)
#define IRQ_FlexCAN_0_FlexCAN_BUF_12_15 (71)
#define IRQ_FlexCAN_0_FlexCAN_BUF_16_31 (72)
#define IRQ_FlexCAN_0_FlexCAN_BUF_32_63 (73)
#define IRQ_DSPI_0_DSPI_SR_TFUF_DSPI_SR_RFOF (74)
#define IRQ_DSPI_0_DSPI_SR_EOQF (75)
#define IRQ_DSPI_0_DSPI_SR_TFFF (76)
#define IRQ_DSPI_0_DSPI_SR_TCF (77)
#define IRQ_DSPI_0_DSPI_SR_RFDF (78)
#define IRQ_LINFlex_0_LINFlex_RXI (79)
#define IRQ_LINFlex_0_LINFlex_TXI (80)
#define IRQ_LINFlex_0_LINFlex_ERR (81)
#define IRQ_FlexCAN_1_FlexCAN_ESR_ERR_INT (85)
#define IRQ_FlexCAN_1_FlexCAN_ESR_BOFF_OR_FlexCAN_Transmit_Warning_OR_FlexCAN_Receive_Warning (86)
#define IRQ_FlexCAN_1_FlexCAN_BUF_00_03 (88)
#define IRQ_FlexCAN_1_FlexCAN_BUF_04_07 (89)
#define IRQ_FlexCAN_1_FlexCAN_BUF_08_11 (90)
#define IRQ_FlexCAN_1_FlexCAN_BUF_12_15 (91)
#define IRQ_FlexCAN_1_FlexCAN_BUF_16_31 (92)
#define IRQ_FlexCAN_1_FlexCAN_BUF_32_63 (93)
#define IRQ_DSPI_1_DSPI_SR_TFUF_DSPI_SR_RFOF (94)
#define IRQ_DSPI_1_DSPI_SR_EOQF (95)
#define IRQ_DSPI_1_DSPI_SR_TFFF (96)
#define IRQ_DSPI_1_DSPI_SR_TCF (97)
#define IRQ_DSPI_1_DSPI_SR_RFDF (98)
#define IRQ_LINFlex_1_LINFlex_RXI (99)
#define IRQ_LINFlex_1_LINFlex_TXI (100)
#define IRQ_LINFlex_1_LINFlex_ERR (101)
#define IRQ_FlexCAN_2_FlexCAN__ERR_INT (105)
#define IRQ_FlexCAN_2_FlexCAN_ESR_BOFF_OR_FlexCAN_Transmit_Warning_OR_FlexCAN_Receive_Warning (106)
#define IRQ_FlexCAN_2_FlexCAN_BUF_00_03 (108)
#define IRQ_FlexCAN_2_FlexCAN_BUF_04_07 (109)
#define IRQ_FlexCAN_2_FlexCAN_BUF_08_11 (110)
#define IRQ_FlexCAN_2_FlexCAN_BUF_12_15 (111)
#define IRQ_FlexCAN_2_FlexCAN_BUF_16_31 (112)
#define IRQ_FlexCAN_2_FlexCAN_BUF_32_63 (113)
#define IRQ_DSPI_2_DSPI_SR_TFUF_DSPI_SR_RFOF (114)
#define IRQ_DSPI_2_DSPI_SR_EOQF (115)
#define IRQ_DSPI_2_DSPI_SR_TFFF (116)
#define IRQ_DSPI_2_DSPI_SR_TCF (117)
#define IRQ_DSPI_2_DSPI_SR_RFDF (118)
#define IRQ_LINFlex_2_LINFlex_RXI (119)
#define IRQ_LINFlex_2_LINFlex_TXI (120)
#define IRQ_LINFlex_2_LINFlex_ERR (121)
#define IRQ_LINFlex_3_LINFlex_RXI (122)
#define IRQ_LINFlex_3_LINFlex_TXI (123)
#define IRQ_LINFlex_3_LINFlex_ERR (124)
#define IRQ_I2C_0_I2C_SR_IBAL_I2C_SR_TCF_I2C_SR_IAAS (125)
#define IRQ_PIT_PITimer_Channel_3 (127)
#define IRQ_PIT_PITimer_Channel_4 (128)
#define IRQ_PIT_PITimer_Channel_5 (129)
#define IRQ_eMIOS_0_EMIOS_GFR_F0_F1 (141)
#define IRQ_eMIOS_0_EMIOS_GFR_F2_F3 (142)
#define IRQ_eMIOS_0_EMIOS_GFR_F4_F5 (143)
#define IRQ_eMIOS_0_EMIOS_GFR_F6_F7 (144)
#define IRQ_eMIOS_0_EMIOS_GFR_F8_F9 (145)
#define IRQ_eMIOS_0_EMIOS_GFR_F10_F11 (146)
#define IRQ_eMIOS_0_EMIOS_GFR_F12_F13 (147)
#define IRQ_eMIOS_0_EMIOS_GFR_F14_F15 (148)
#define IRQ_eMIOS_0_EMIOS_GFR_F16_F17 (149)
#define IRQ_eMIOS_0_EMIOS_GFR_F18_F19 (150)
#define IRQ_eMIOS_0_EMIOS_GFR_F20_F21 (151)
#define IRQ_eMIOS_0_EMIOS_GFR_F22_F23 (152)
#define IRQ_eMIOS_0_EMIOS_GFR_F24_F25 (153)
#define IRQ_eMIOS_0_EMIOS_GFR_F26_F27 (154)
#define IRQ_eMIOS_1_EMIOS_GFR_F0_F1 (157)
#define IRQ_eMIOS_1_EMIOS_GFR_F2_F3 (158)
#define IRQ_eMIOS_1_EMIOS_GFR_F4_F5 (159)
#define IRQ_eMIOS_1_EMIOS_GFR_F6_F7 (160)
#define IRQ_eMIOS_1_EMIOS_GFR_F8_F9 (161)
#define IRQ_eMIOS_1_EMIOS_GFR_F10_F11 (162)
#define IRQ_eMIOS_1_EMIOS_GFR_F12_F13 (163)
#define IRQ_eMIOS_1_EMIOS_GFR_F14_F15 (164)
#define IRQ_eMIOS_1_EMIOS_GFR_F16_F17 (165)
#define IRQ_eMIOS_1_EMIOS_GFR_F18_F19 (166)
#define IRQ_eMIOS_1_EMIOS_GFR_F20_F21 (167)
#define IRQ_eMIOS_1_EMIOS_GFR_F22_F23 (168)
#define IRQ_eMIOS_1_EMIOS_GFR_F24_F25 (169)
#define IRQ_eMIOS_1_EMIOS_GFR_F26_F27 (170)
#define IRQ_FlexCAN_3_FlexCAN_ESR (173)
#define IRQ_FlexCAN_3_FlexCAN_ESR_BOFF_OR_FlexCAN_Transmit_Warning_OR_FlexCAN_Receive_Warning (174)
#define IRQ_FlexCAN_3_FlexCAN_BUF_0_3 (176)
#define IRQ_FlexCAN_3_FlexCAN_BUF_4_7 (177)
#define IRQ_FlexCAN_3_FlexCAN_BUF_8_11 (178)
#define IRQ_FlexCAN_3_FlexCAN_BUF_12_15 (179)
#define IRQ_FlexCAN_3_FlexCAN_BUF_16_31 (180)
#define IRQ_FlexCAN_3_FlexCAN_BUF_32_63 (181)
#define IRQ_FlexCAN_4_FlexCAN_ESR (190)
#define IRQ_FlexCAN_4_FlexCAN_ESR_BOFF_OR_FlexCAN_Transmit_Warning_OR_FlexCAN_Receive_Warning (191)
#define IRQ_FlexCAN_4_FlexCAN_BUF_0_3 (193)
#define IRQ_FlexCAN_4_FlexCAN_BUF_4_7 (194)
#define IRQ_FlexCAN_4_FlexCAN_BUF_8_11 (195)
#define IRQ_FlexCAN_4_FlexCAN_BUF_12_15 (196)
#define IRQ_FlexCAN_4_FlexCAN_BUF_16_31 (197)
#define IRQ_FlexCAN_4_FlexCAN_BUF_32_63 (198)
#define IRQ_FlexCAN_5_FlexCAN_ESR (202)
#define IRQ_FlexCAN_5_FlexCAN_ESR_BOFF_OR_FlexCAN_Transmit_Warning_OR_FlexCAN_Receive_Warning (203)
#define IRQ_FlexCAN_5_FlexCAN_BUF_0_3 (205)
#define IRQ_FlexCAN_5_FlexCAN_BUF_4_7 (206)
#define IRQ_FlexCAN_5_FlexCAN_BUF_8_11 (207)
#define IRQ_FlexCAN_5_FlexCAN_BUF_12_15 (208)
#define IRQ_FlexCAN_5_FlexCAN_BUF_16_31 (209)
#define IRQ_FlexCAN_5_FlexCAN_BUF_32_63 (210)


#endif /* __BASE_H__ */
