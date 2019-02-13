/*
 * main.c
 *
 *  Created on: Feb 7, 2019
 *      Author: Killua
 */


#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "LED_interface.h"
#include "SWI_interface.h"
#include <util/delay.h>


int main(){
	DIO_voidInit();
	u8 Local_SWI_state = -1;
	while(1){
		u8 state= SWI_u8GetSwitchState(2 ,&Local_SWI_state);
		if (Local_SWI_state == 1){
			LED_u8SetLedOn(8);
			_delay_ms(100);
			LED_u8SetLedOff(8);
			_delay_ms(100);
		}
	}

	return 0 ;
}

