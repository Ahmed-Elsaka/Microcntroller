/*
 * sevenSegment_prog.c
 *
 *  Created on: Feb 1, 2019
 *      Author: Killua
 */
#include "STD_TYPES.h"
#include "LED_private.h"
#include "BIT_CALC.h"

/*
 *
			A B C D E F G DP
	0->     1 1 1 1 1 1 0 0   = 0xFC
	1->     0 0 0 0 1 1 0 0   = 0x0C
	2->     1 1 0 1 1 0 1 0   = 0xDA
	3->     1 1 1 1 0 0 1 0   = 0xF2
	4->     0 1 1 0 0 1 1 0   = 0x66
	5->     1 0 1 1 0 1 1 0   = 0xB6
	6->     1 0 1 1 1 1 1 0   = 0xBE
	7->     1 1 1 0 0 0 1 0   = 0xE2
	8->     1 1 1 1 1 1 1 0   = 0xFE
	9->     1 1 1 0 0 1 1 0   = 0xE6
 *

 */

#define ZERO     0b01111110
#define ONE      0b01100000
#define TWO      0b10110110
#define THREE    0b10011110
#define FOUR     0b11001100
#define FIVE     0b11011010
#define SIX      0b11111010
#define SEVEN    0b00001110
#define EIGHT    0b11111110
#define NINE     0b11011110


u8 sevenSegment_u8Init(void){
	//SET_PORT_DIRECTION(DDRA->ByteAccess, ALL_PINS_OUTPUT);
	return ERROR_OK;
}
u8 sevenSegment_u8Write(u8 copy_u8NB){
	switch( copy_u8NB ){
	case 0:
		SET_PORT_VALUE(PORTA->ByteAccess,ZERO );
		break;
	case 1:
		SET_PORT_VALUE(PORTA->ByteAccess,ONE );
		break;
	case 2:
		SET_PORT_VALUE(PORTA->ByteAccess,TWO );
		break;
	case 3:
		SET_PORT_VALUE(PORTA->ByteAccess,THREE );
		break;
	case 4:
		SET_PORT_VALUE(PORTA->ByteAccess,FOUR );
		break;
	case 5:
		SET_PORT_VALUE(PORTA->ByteAccess,FIVE );
		break;
	case 6:
		SET_PORT_VALUE(PORTA->ByteAccess,SIX );
		break;
	case 7:
		SET_PORT_VALUE(PORTA->ByteAccess,SEVEN );
		break;
	case 8:
		SET_PORT_VALUE(PORTA->ByteAccess,EIGHT );
		break;
	case 9:
		SET_PORT_VALUE(PORTA->ByteAccess,NINE );
		break;
	}
	return ERROR_OK;
}


