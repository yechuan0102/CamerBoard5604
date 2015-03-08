//Author: wujianguo
//QQ: 9599598
//MSN: wujianguo19@hotmail.com
//Data: 2015-3-8

#ifndef	__GUI_FONT_LIB_H__
#define	__GUI_FONT_LIB_H__

typedef struct gui_font_header{
	unsigned char	magic[4];	//'U'('S', 'M'), 'F', 'L', X---Unicode(Simple or MBCS) Font Library, X: 表示版本号. 分高低4位。如 0x12表示 Ver 1.2
	unsigned char	nSection; // 共分几段数据。
	unsigned char	YSize;    /* height of font  */  	
	unsigned short	wCpFlag;    // codepageflag:  bit0~bit13 每个bit分别代表一个CodePage 标志，如果是1，则表示当前CodePage 被选定，否则为非选定。
	unsigned short	nTotalChars;  // 总的字符数
	unsigned char	ScanMode;   // 扫描模式
} GUI_FONT_HEADER, *PGUI_FONT_HEADER;

typedef struct gui_font_section{
	unsigned short	 	first;	// 当前段第一个字符
	unsigned short		last;	// 当前段最后一个字符
	unsigned short		startIndex;	// 记录当前段第一个字符的起始位置（即索引值）
}GUI_FONT_SECTION;


typedef struct gui_font_index{
	unsigned char 		width;	// 记录当前字符像素宽度
	unsigned int		offset;	 // 记录当前字符点阵数据的起始地址（即偏移值）
}GUI_FONT_INDEX;

extern GUI_FONT_HEADER fontHeader;
extern GUI_FONT_SECTION fonts_sections[1];
extern GUI_FONT_INDEX fonts_index[65478];
extern unsigned char fonts_data[];


#endif	//__GUI_FONT_LIB_H__
