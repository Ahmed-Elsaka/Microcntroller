/*
 * main.c
 *
 *  Created on: Feb 10, 2019
 *      Author: Killua
 */


#include <avr/io.h>

int main(){
	DDRD = 0xFF;
	PORTD = 0xFF;

	return 0 ;
}
