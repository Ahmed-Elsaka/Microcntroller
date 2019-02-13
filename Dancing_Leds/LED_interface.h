/*
 * LED_interface.h
 *
 *  Created on: Jan 31, 2019
 *      Author: Killua
 */

#ifndef LED_INTERFACE_H_
#define LED_INTERFACE_H_


/* functions :
 * leds right to left
 * leds left to right
 * leds right to left with turnoff leds before it
 * leds go right and left
 * traffic light with seven segment
 *
 */

u8 LED_u8MoveRightToLeft(void);
u8 LED_u8MoveRightToLeftWithMemory(void);
u8 LED_u8MoveFromRightToLeftAndFromLeftToRight(void);
u8 LED_u8MoveFromRightToLeftAndFromLeftToRightWithMemory(void);
u8 LED_u8MoveFromRightAndLeftToCenter(void);
u8 LED_u8MoveFromRightAndLeftToCenterWithMemory(void);
u8 LED_u8TrafficLight(void);



#endif /* LED_INTERFACE_H_ */
