/*
 * STD_TYPES.h
 *
 *  Created on: Jan 29, 2019
 *      Author: Killua
 */

#ifndef STD_TYPES_H_
#define STD_TYPES_H_



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

#define TRUE  1
#define FALSE 0

#define ALL_PINS_OUTPUT 0xFF
#define ALL_PINS_INPUT 0x00


//define numbers: 
#define ZERO   0
#define ONE    1
#define TWO    2
#define THREE  3
#define FOUR   4
#define FIVE   5
#define SIX    6
#define SEVEN  7
#define EIGHT  8
#define NINE   9

#endif /* STD_TYPES_H_ */
