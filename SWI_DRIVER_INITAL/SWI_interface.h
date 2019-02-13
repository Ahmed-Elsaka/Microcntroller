/*
 * SWI_interface.h
 *
 *  Created on: Feb 7, 2019
 *      Author: Killua
 */

#ifndef SWI_INTERFACE_H_
#define SWI_INTERFACE_H_

#define SWI_PRESSED   (u8)1
#define SWI_RELEASED  (u8)0

u8 SWI_u8GetSwitchState(u8 Copy_u8SwiNb ,u8 * Copy_pu8SwitchState);

#endif /* SWI_INTERFACE_H_ */
