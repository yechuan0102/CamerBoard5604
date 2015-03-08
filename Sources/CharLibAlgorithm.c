/*
 * CharLibAlgorithm.c
 *
 *  Created on: Mar 8, 2015
 *      Author: Jian
 */


#include "includes.h"


int get_section(uint16_t uin, int *sec);
int get_index(uint16_t uni, int sec, uint16_t *index);


int unicode_to_font(uint16_t uni, int ySize, int xMaxSize, int *xSize, uint8_t *font)
{
    int sec = 0;
    uint16_t index = 0;
    
    if (get_section(uni, &sec))
    {
        return 1;
    }
    if (get_index(uni, sec, &index))
    {
        return 2;
    }
    if (ySize != fontHeader.YSize)
    {
        return 3;
    }
    if (xMaxSize < fonts_index[index].width)
    {
        return 4;
    }
    else
    {
        *xSize = fonts_index[index].width;
    }
    font = &(fonts_data[fonts_index[index].offset]);
    return 0;
}


 int get_section(uint16_t uni, int *sec)
 {
     int i = 0;
     
     for (i=0; i<fontHeader.nSection; i++)
     {
         if (uni >= fonts_sections[i].first && uni <= fonts_sections[i].last)
         {
             *sec = i;
             return 0;
         }
     }
     return 1;
 }

 
 int get_index(uint16_t uni, int sec, uint16_t *index)
 {
     *index = uni-fonts_sections[sec].startIndex;
     return 0;
 }
