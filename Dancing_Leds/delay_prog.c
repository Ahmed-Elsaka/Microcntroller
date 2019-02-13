/*
 * delay_prog.c
 *
 *  Created on: Feb 1, 2019
 *      Author: Killua
 */
#include "STD_TYPES.h"
#include <util/delay.h>

u8 delay_ms(u8 copy_u8DelayMs){
	_delay_ms(copy_u8DelayMs);
	return ERROR_OK;
}
