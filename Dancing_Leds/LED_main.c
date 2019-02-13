
/********************************************************************************/
/* Author  : Ahmed Elsaka                        								*/
/* Date    : 1/2/2019                            								*/
/* Version : 1                                 								    */
/********************************************************************************/
/* Description                               								    */
/* -----------                                       						    */
/* this program will make effects on leds   						*/
/********************************************************************************/
#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "LED_interface.h"
#include "LED_private.h"
#include "LED_config.h"
#include "sevenSegment_interface.h"


int main(){

	u8 local_u8RED = TRUE;
	u8 local_u8Green= FALSE;
	u8 local_u8Yellow=FALSE;

	sevenSegment_u8Init();
	u8 local_loopCounter = 0;

	while (TRUE){

		if (local_u8RED == TRUE){
			SET_BIT(PORTD->ByteAccess,0);
			CLEAR_BIT(PORTD->ByteAccess,2);
			local_u8RED = FALSE;
			local_u8Green= TRUE;
		}else if (local_u8Green == TRUE){
			SET_BIT(PORTD->ByteAccess,1);
			CLEAR_BIT(PORTD->ByteAccess,0);
			local_u8Green = FALSE;
			local_u8Yellow= TRUE;
		}else if (local_u8Yellow == TRUE){
			SET_BIT(PORTD->ByteAccess,2);
			CLEAR_BIT(PORTD->ByteAccess,1);
			local_u8Yellow = FALSE;
			local_u8RED= TRUE;
		}

		for (local_loopCounter =10 ; local_loopCounter >= 1 ; local_loopCounter--){
			sevenSegment_u8Write(local_loopCounter-1);
			delay_ms(100);
		}



	}





	return 0 ;
}
