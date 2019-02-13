/*
 * LED_main.c
 *
 *  Created on: Jan 31, 2019
 *      Author: Killua
 */
#include "STD_TYPES.h"
#include "LED_interface.h"
#include <util/delay.h>


int main(void){
	DIO_u8init();
	u8_ledinit();
	while(1){
		u8_LedOn(10);
		_delay_ms(500);
		u8_LedOff(10);
		_delay_ms(500);
	}

}
