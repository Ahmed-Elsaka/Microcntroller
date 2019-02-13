/*
 * main.c
 *
 *  Created on: Feb 6, 2019
 *      Author: Ahmed Elsaka
 */
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "LED_interface.h"
#include <util/delay.h>
#include "DIO_interface.h"
int main(void){

	// set direction
	DIO_voidInit();

	DIO_u8SetPortnValue(3,0xFF);

	return 0 ;
}

