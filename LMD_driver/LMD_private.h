/*
 * LMD_private.h
 *
 *  Created on: Feb 11, 2019
 *      Author: Killua
 */

#ifndef LMD_PRIVATE_H_
#define LMD_PRIVATE_H_


#define LMD_PORTA (u8)0
#define LMD_PORTB (u8)1
#define LMD_PORTC (u8)2
#define LMD_PORTD (u8)3


#define LMD_COLUMN_COMMON_CATHOD       (u8)0
#define	LMD_COLUMN_COMMON_ANODE        (u8)1
#define LMD_ROW_COMMON_CATHOD          (u8)2
#define	LMD_ROW_COMMON_ANODE           (u8)3


#define LMD_ONE                       (u8)1  
#define LMD_TWO                       (u8)2
#define LMD_THREE					  (u8)3
#define LMD_FOUR                      (u8)4
#define LMD_FIVE                      (u8)5
#define LMD_SIX                       (u8)6
#define LMD_SEVEN					  (u8)7
#define LMD_EIGHT                     (u8)8
#define LMD_NINE                      (u8)9
#define LMD_TEN                       (u8)10


#define LOOP_START_INDEX              (u8)0

 
/******************************************************/
/* define colors                                      */
/* 		LMD_RED                                       */
/*      LMD_GREEN                                     */
/* ***************************************************/
#define LMD_RED   (u8)0
#define LMD_GREEN (u8)1

	u8 LMD_COLUM_ARR[] = {
									0b11111110, 0b11111101, 0b11111011, 0b11110111, 0b11101111, 0b11011111, 0b10111111, 0b01111111
							};
#endif /* LMD_PRIVATE_H_ */
