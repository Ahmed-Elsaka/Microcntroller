/*
 * SWI_config.h
 *
 *  Created on: Feb 7, 2019
 *      Author: Killua
 */

#ifndef SWI_CONFIG_H_
#define SWI_CONFIG_H_

#define SWI_u8_NUM_OF_SWIS  3

u8 SWI_Au8SwitchType[SWI_u8_NUM_OF_SWIS]={
	SWI_u8_PULL_DOWN,
	SWI_u8_PULL_UP,
	SWI_u8_PULL_DOWN,
};

u8 SWI_Au8SwitchChannels[SWI_u8_NUM_OF_SWIS]={
	DIO_u8_PIN0,
	DIO_u8_PIN1,
	DIO_u8_PIN2
};
#endif /* SWI_CONFIG_H_ */
