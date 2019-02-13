/*
 * LMD_config.h
 *
 *  Created on: Feb 11, 2019
 *      Author: Killua
 */

#ifndef LMD_CONFIG_H_
#define LMD_CONFIG_H_


/*******************************************************************************/
/* This definition select seven Segment PORTS :                                */
/* 	Range :                                                                    */
/* 		LMD_PORTA                                                              */
/* 		LMD_PORTB                                                              */
/* 		LMD_PORTC                                                              */
/* 		LMD_PORTD                                                              */
/*******************************************************************************/
#define LMD_ACTIVE_PORT LMD_PORTD
#define LMD_RED_PORT    LMD_PORTA
#define LMD_YELLOW_PORT LMD_PORTB


 /*********************************************************	*********************/
/* This definition select Width and Hight for LED Matrix :                     */
/* 	Range :                                                                    */
/* 		LMD_ONE  															   */ 
/*		LMD_TWO  															   */ 
/*		LMD_THREE															   */ 
/*		LMD_FOUR 															   */ 
/*		LMD_FIVE 															   */ 
/*		LMD_SIX  															   */ 
/*		LMD_SEVEN															   */
/*		LMD_EIGHT															   */ 
/*		LMD_NINE 															   */ 
/*		LMD_TEN  															   */ 								
/*******************************************************************************/
#define LMD_WIDTH      LMD_EIGHT
#define LMD_HIGHT      LMD_EIGHT
/*******************************************************************************/
/* This definition select seven Segment type :                                 */
/* 	Range :                                                                    */
/* 		LMD_COLUMN_COMMON_CATHOD                                               */
/* 		LMD_COLUMN_COMMON_ANODE                                                */
/* 		LMD_ROW_COMMON_CATHOD                                                  */
/* 		LMD_ROW_COMMON_ANODE                                                   */
/*******************************************************************************/
#define LMD_TYPE LMD_COLUMN_COMMON_CATHOD

/*
u8 LMD_u8Columns[]={
		0b10000001,
		0b10100101,
		0b10000001,
		0b11000011,
		0b10100010,
		0b01011011,
		0b10111101
}

*/

#define LMD_COLOR LMD_RED



#endif /* LMD_CONFIG_H_ */
