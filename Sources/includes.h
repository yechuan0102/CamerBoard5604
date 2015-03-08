#ifndef __INCLUDES_H__
#define __INCLUDES_H__

#ifndef _TYPEDEF_BYTE_
#define _TYPEDEF_BYTE_
typedef unsigned char BYTE;
#endif

#ifndef _TYPEDEF_SBYTE_
#define _TYPEDEF_SBYTE_
typedef signed char SBYTE;
#endif

#ifndef _TYPEDEF_WORD_
#define _TYPEDEF_WORD_
typedef unsigned short WORD;
#endif

#ifndef _TYPEDEF_SWORD_
#define _TYPEDEF_SWORD_
typedef signed short SWORD;
#endif

#ifndef _TYPEDEF_DWORD_
#define _TYPEDEF_DWORD_
//typedef unsigned int DWORD;
typedef unsigned long int DWORD;
#endif

#if 0
#ifndef _TYPEDEF_byte_
#define _TYPEDEF_byte_
typedef unsigned char byte;
#endif

#ifndef _TYPEDEF_word_
#define _TYPEDEF_word_
typedef unsigned short word;
#endif
#endif

#include "MPC5604B.h"
#include "typedefs.h"
#include <stddef.h>
#include <wchar.h>
#include "Base.h"
#include "init.h"
#include "lcd.h"
#include "video.h"
#include "IntcInterrupts.h"
#include "CharLibData.h"
#include "CharLibAlgorithm.h"

///****************LED****************///
#if 1
#define D0 SIU.GPDO[40].B.PDO
#define D1 SIU.GPDO[45].B.PDO
#define D2 SIU.GPDO[44].B.PDO
#define D3 SIU.GPDO[71].B.PDO
#endif


#endif
