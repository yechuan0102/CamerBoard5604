#ifndef __LCD_H__
#define __LCD_H__


void initLCD(void);
void LCD_WrDat(BYTE data);
void LCD_WrCmd(BYTE cmd);  //���cmd
void LCD_Set_Pos(BYTE x, BYTE y);
void LCD_Fill(BYTE bmp_data);
void LCD_CLS(void);//����
void LCD_PutPixel(BYTE x,BYTE y);
void LCD_Rectangle(BYTE x1,BYTE y1,BYTE x2,BYTE y2,BYTE gif);
void LCD_P6x8Str(BYTE x,BYTE y,BYTE ch[]);
void LCD_P8x16Str(BYTE x,BYTE y,BYTE ch[]);
void LCD_P14x16Str(BYTE x,BYTE y,BYTE ch[]);
void LCD_Printbyte(BYTE x, BYTE y, BYTE ch[]);
void LCD_PrintoutInt(BYTE x, BYTE y, SWORD data);
void LCD_PrintoutFloat(BYTE x, BYTE y, float n);
void LCD_DISPLAY(void);


//*****************OLED****************//
//#define LCD_SCL  SIU.GPDO[0].R//ʱ��
//#define LCD_SDA  SIU.GPDO[1].R//�������
#define LCD_RST  SIU.GPDO[37].R//reset
#define LCD_DC  SIU.GPDO[43].R//����/����

#define XLevelL		0x00
#define XLevelH		0x10
#define XLevel		((XLevelH&0x0F)*16+XLevelL)
#define Max_Column	128
#define Max_Row		  64
#define	Brightness	0xCF 


#define X_WIDTH 128
#define Y_WIDTH 64





#endif