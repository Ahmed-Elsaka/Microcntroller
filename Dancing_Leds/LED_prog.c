#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "LED_private.h"
#include "delay.h"

#define delayMs 100
u8 LED_u8Init(u8 copy_u8PortNB){
	SET_PORT_DIRECTION(DDRD->ByteAccess, ALL_PINS_OUTPUT);
	return ERROR_OK;
}

u8 LED_u8MoveRightToLeft(void){
	u8 local_u8Counter =ZERO;
	u8 local_u8PortValue = 1 ; // first port 
	for (local_u8Counter = 0 ; local_u8Counter < 8 ; local_u8Counter++){
		local_u8PortValue = (u8)1 <<local_u8Counter; // mask_one 
		SET_PORT_VALUE(PORTD->ByteAccess,local_u8PortValue);
		delay_ms(delayMs);
	}
	return ERROR_OK;
}
u8 LED_u8MoveRightToLeftWithMemory(void){
	u8 local_u8Counter =0;
	u8 local_u8PortValue = 0 ;
	for (local_u8Counter = 0 ; local_u8Counter < 9 ; local_u8Counter++){
		if(local_u8Counter != 0){
			local_u8PortValue = (local_u8PortValue<<1)|1;
			//local_u8PortValue = (local_u8PortValue<<1);
		}
		SET_PORT_VALUE(PORTD->ByteAccess,local_u8PortValue);
		delay_ms(delayMs);
	}
	delay_ms(delayMs);
	return ERROR_OK;
}
u8 LED_u8MoveFromRightToLeftAndFromLeftToRight(void){
	u8 local_u8Counter =0;
	u8 local_u8PortValue = 1 ;
	for (local_u8Counter = 0 ; local_u8Counter < 8 ; local_u8Counter++){
		delay_ms(delayMs);
		if( local_u8Counter == 0 ){
			local_u8PortValue = (1<<0);
		}else{
			local_u8PortValue = (local_u8PortValue<<1);
		}
		SET_PORT_VALUE(PORTD->ByteAccess,local_u8PortValue);
	}
	local_u8PortValue = 0x80; //mast_bit_one
	for (local_u8Counter = 0 ; local_u8Counter < 8 ; local_u8Counter++){
		    delay_ms(delayMs);
		    if ( local_u8Counter !=0){
		    	local_u8PortValue = (local_u8PortValue >>1);
		    }
			SET_PORT_VALUE(PORTD->ByteAccess,local_u8PortValue);
	}
	return ERROR_OK;
}
u8 LED_u8MoveFromRightToLeftAndFromLeftToRightWithMemory(void){
	u8 local_u8Counter =0;
	u8 local_u8PortValue = 0 ;
	for (local_u8Counter = 0 ; local_u8Counter < 9 ; local_u8Counter++){
		local_u8PortValue = (local_u8PortValue<<1)|1;
		SET_PORT_VALUE(PORTD->ByteAccess,local_u8PortValue);
		delay_ms(delayMs);
	}

	for (local_u8Counter = 0 ; local_u8Counter < 8 ; local_u8Counter++){
			local_u8PortValue = (local_u8PortValue >>1);
			SET_PORT_VALUE(PORTD->ByteAccess,local_u8PortValue);
			delay_ms(delayMs);
	}
	return ERROR_OK;
}
u8 LED_u8MoveFromRightAndLeftToCenter(void){
	u8 local_u8Counter =0;
	u8 local_u8PortValue = 0 ;
	u8 local_u8UpperNibble =0x80 ;
	u8 local_u8LowerNibble = 0x01 ;
	for (local_u8Counter = 0 ; local_u8Counter < 5 ; local_u8Counter++){
		if(local_u8Counter !=0){
			local_u8UpperNibble = local_u8UpperNibble >>1;
			local_u8LowerNibble = local_u8LowerNibble <<1;
		}
		local_u8PortValue = (local_u8UpperNibble &0xf0) | (local_u8LowerNibble & 0x0F);
		// local_u8PortValue = (local_u8PortValue<<1)|1;
		SET_PORT_VALUE(PORTD->ByteAccess,local_u8PortValue);
		delay_ms(delayMs);
	}

	 local_u8UpperNibble = 0x10 ;  //mask_0x10
	 local_u8LowerNibble = 0x08 ;
	for (local_u8Counter = 0 ; local_u8Counter < 5 ; local_u8Counter++){

		if(local_u8Counter !=0){
			local_u8UpperNibble = local_u8UpperNibble <<1;
			local_u8LowerNibble = local_u8LowerNibble >>1;
		}
		local_u8PortValue = (local_u8UpperNibble &0xf0) | (local_u8LowerNibble & 0x0F);
		SET_PORT_VALUE(PORTD->ByteAccess,local_u8PortValue);
		delay_ms(delayMs);
	}
	return ERROR_OK;
}
u8 LED_u8MoveFromRightAndLeftToCenterWithMemory(void){

	u8 local_u8Counter =0;
	u8 local_u8PortValue = 0 ;
	u8 local_u8UpperNibble =0x80 ;
	u8 local_u8LowerNibble = 0x01 ;
	for (local_u8Counter = 0 ; local_u8Counter < 5 ; local_u8Counter++){
		if(local_u8Counter !=0){
			local_u8UpperNibble = (local_u8UpperNibble >>1)|0x80;
			local_u8LowerNibble = (local_u8LowerNibble <<1)|1;
		}
		local_u8PortValue = (local_u8UpperNibble &0xf0) | (local_u8LowerNibble & 0x0F);
		// local_u8PortValue = (local_u8PortValue<<1)|1;
		SET_PORT_VALUE(PORTD->ByteAccess,local_u8PortValue);
		delay_ms(delayMs);
	}
	for (local_u8Counter = 0 ; local_u8Counter < 4 ; local_u8Counter++){
			local_u8UpperNibble = local_u8UpperNibble <<1;
			local_u8LowerNibble = local_u8LowerNibble >>1;
		local_u8PortValue = (local_u8UpperNibble &0xf0) | (local_u8LowerNibble & 0x0F);
		SET_PORT_VALUE(PORTD->ByteAccess,local_u8PortValue);
		delay_ms(delayMs);
	}
	return ERROR_OK;
}
u8 LED_u8TrafficLight(void){

	return ERROR_OK;
}

