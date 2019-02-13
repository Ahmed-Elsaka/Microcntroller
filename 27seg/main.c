/**************************************************/
/* Author      :  Ahmed Elsaka                    */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/*                                                */
/*                                                */
/**************************************************/
#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "SSD_interface.h"
#include <util/delay.h>

int main(void){

	/*

		SSD_u8SetOn(1);
		_delay_ms(1000);
		ee=SSD_u8SetValue(1,1);
		_delay_ms(1000);
		SSD_u8SetOff(1);
		_delay_ms(1000);
		ee=SSD_u8SetValue(1,3);
		_delay_ms(1000);
		SSD_u8SetOn(1);
*/
	while(1){
		    SSD_u8SetOn(1);
			SSD_u8SetValue(1,3);
			_delay_ms(10);
			SSD_u8SetOff(1);
			SSD_u8SetOn(2);
			SSD_u8SetValue(2,9);
			_delay_ms(10);
	}



	return 0 ;
}

