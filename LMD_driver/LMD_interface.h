/*
 * LMD_interface.h
 *
 *  Created on: Feb 11, 2019
 *      Author: Killua
 */

#ifndef LMD_INTERFACE_H_
#define LMD_INTERFACE_H_

/***************************************************/
/*Description:                                     */
/*--------------                                   */
/* LMD_u8Display:                                  */
/* 	this function will draw image on Led Matrix    */
/*	INPUTS : 	pointer to image                   */
/* 				color that you want to appear      */
/*			    DIO_u8_PORT_HIGH                   */
/***************************************************/

u8 LMD_u8Display( u8 * Copy_pu8Image, u8 Copy_u8Color);






#endif /* LMD_INTERFACE_H_ */
