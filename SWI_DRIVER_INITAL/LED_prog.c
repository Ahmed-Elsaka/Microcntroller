/**************************************************/
/* Author      : Ahmed Elsaka                      */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/* -------------                                  */
/*   this file  contains implementations of       */
/*  LED_interface.h                              */
/**************************************************/
#include "STD_TYPES.h"
#include "BIT_CALC.h"
#include "DIO_interface.h"
#include "LED_interface.h"
#include "LED_private.h"
#include "LED_config.h"


u8 LED_u8SetLedOn(u8  Copy_u8LedNb){
	/*********************************************************/
	/*Description :                                          */
	/*------------                                           */
	/*		this functions turns led on                      */
	/*	INPUTS :                                             */
	/*			Copy_u8LedNb : LED Number                    */
	/*	OUTPUT:                                              */
	/*			return ERROR STATE                           */
	/*********************************************************/
  u8 local_ErrorState = ERROR_OK;
  if(Copy_u8LedNb > LED_u8_NUM_OF_LEDS || Copy_u8LedNb < ARRAY_START_INDEX ){
    local_ErrorState = ERROR_NOK;
  }else {
    switch(LED_Au8LedsTypes[Copy_u8LedNb -ARRAY_START_INDEX]){
      case LED_u8_FORWARD :
             DIO_u8SetPinValue(LED_Au8LedsChannels[Copy_u8LedNb -ARRAY_START_INDEX], DIO_u8_PIN_HIGH);
             break;
      case LED_u8_REVERSE :
             DIO_u8SetPinValue(LED_Au8LedsChannels[Copy_u8LedNb -ARRAY_START_INDEX], DIO_u8_PIN_LOW);
             break;
       default :
        local_ErrorState = ERROR_NOK;
    }

  }
  return local_ErrorState;
}


u8 LED_u8SetLedOff(u8  Copy_u8ledNb)
{
	/*********************************************************/
	/*Description :                                          */
	/*------------                                           */
	/*		this functions turns led OFF                      */
	/*	INPUTS :                                             */
	/*			Copy_u8LedNb : LED Number                    */
	/*	OUTPUT:                                              */
	/*			return ERROR STATE                           */
	/*********************************************************/
  u8  local_ErrorState = ERROR_OK;
  if(Copy_u8ledNb > LED_u8_NUM_OF_LEDS || Copy_u8ledNb < ARRAY_START_INDEX ){
    local_ErrorState = ERROR_NOK;
  }else {
    switch(LED_Au8LedsTypes[Copy_u8ledNb -ARRAY_START_INDEX]){
      case LED_u8_FORWARD :
             DIO_u8SetPinValue(LED_Au8LedsChannels[Copy_u8ledNb -ARRAY_START_INDEX], DIO_u8_PIN_LOW);
             break;
      case LED_u8_REVERSE :
             DIO_u8SetPinValue(LED_Au8LedsChannels[Copy_u8ledNb -ARRAY_START_INDEX], DIO_u8_PIN_HIGH);
             break;
       default :
        local_ErrorState = ERROR_NOK;
    }

  }
  return local_ErrorState;
}
