/*
 * STD_TYPES.h
 *
 *  Created on: Jan 29, 2019
 *      Author: Killua
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_

#define TRUE   1
#define FALSE  0


typedef unsigned char      u8 ;
typedef unsigned short int u16;
typedef unsigned long int  u32;
typedef signed char        s8 ;
typedef signed short int   s16;
typedef signed long int    s32;
typedef float              f32;
typedef long               f64;

typedef union {
	struct {
		u8 Bit0:1;
		u8 Bit1:1;
		u8 Bit2:1;
		u8 Bit3:1;
		u8 Bit4:1;
		u8 Bit5:1;
		u8 Bit6:1;
		u8 Bit7:1;
	} BitAccess;

	u8 ByteAccess;

}Register;

// ERROR STATE
#define ERROR_NOK 1
#define ERROR_OK  0
#define NULL  ((void *)0)

#define OUTPUT 1
#define INPUT  0

#define PIN_OUTPUT 1
#define PIN_INPUT  0

#define PORT_DIR_OUTPUT    0xFF
#define PORT_DIR_INPUT     0x00

#define PORT_VALUE_OUTPUT  0xFF
#define PORT_VALUE_INPUT   0x00

#define PIN_VALUE_INPUT    0
#define PIN_VALUE_OUPUT    1
#define PIN_DIR_INPUT      0
#define PIN_DIR_OUTPUT     1


#define STD_ZERO   0
#define STD_ONE    1
#define STD_TWO    2
#define STD_THREE  3
#define STD_FOUR   4
#define STD_FIVE   5
#define STD_SIX    6
#define STD_SEVEN  7
#define STD_EIGHT  8
#define STD_NINE   9

#endif /* STD_TYPES_H_ */
