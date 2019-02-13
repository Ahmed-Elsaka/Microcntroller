/************************************************/
/* Author : Ahmed Elsaka                        */
/* Date   : 5 Feb. 2019                         */
/* Version: V01                                 */
/************************************************/

/*Comment: inital direction for I/O pins       */
/*Range  : DIO_u8_PIN_INIT_OUTPUT              */
/*         DIO_u8_PIN_INIT_INPUT               */

#ifndef LED_CONFIG_H
#define LED_CONFIG_H


#define LED_u8_NUM_OF_LEDS  11
/*
range : LED_u8_FORWARD
		LED_u8_REVERSE
*/
u8 LED_Au8LedsTypes[LED_u8_NUM_OF_LEDS]={
	LED_u8_FORWARD,
	LED_u8_FORWARD,
	LED_u8_FORWARD,
	LED_u8_FORWARD,
	LED_u8_FORWARD,
	LED_u8_REVERSE,
	LED_u8_FORWARD,
	LED_u8_FORWARD,
	LED_u8_FORWARD,
	LED_u8_FORWARD,
	LED_u8_FORWARD
};

u8 LED_Au8LedsChannels[LED_u8_NUM_OF_LEDS]={
	DIO_u8_PIN13,
	DIO_u8_PIN11,
	DIO_u8_PIN12,
	DIO_u8_PIN3,
	DIO_u8_PIN4,
	DIO_u8_PIN5,
	DIO_u8_PIN6,
	DIO_u8_PIN7,
	DIO_u8_PIN8,
	DIO_u8_PIN9,
	DIO_u8_PIN10
};

#endif
