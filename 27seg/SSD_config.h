/**************************************************/
/* Author      : Ahmed Elsaka                      */
/* Date        : 7/2/2019                         */
/* Description :                                  */
/*                                                */
/*                                                */
/**************************************************/

#ifndef SSD_CONFIG_H_
#define SSD_CONFIG_H_

#define SSD_ONE    1
#define SSD_TWO    2
#define SSD_THREE  3
#define SSD_FOUR   4
#define SSD_FIVE   5
#define SSD_SIX    6
#define SSD_SEVEN  7
#define SSD_EIGHT  8
#define SSD_NINE   9


u8 SSD_Au8SetPinConn[SSD_NO_OF_SSD][SSD_u8_MAX_PINS]={
	{DIO_u8_PIN0,
	 DIO_u8_PIN1,
	 DIO_u8_PIN2,
	 DIO_u8_PIN3,
	 DIO_u8_PIN4,
	 DIO_u8_PIN5,
	 DIO_u8_PIN6,
	 DIO_u8_PIN7},

	 {DIO_u8_PIN8,
	 DIO_u8_PIN9,
	 DIO_u8_PIN10,
	 DIO_u8_PIN11,
	 DIO_u8_PIN12,
	 DIO_u8_PIN13,
	 DIO_u8_PIN14,
	 DIO_u8_PIN15}
};

/*
	range : 
			SSD_u8_CATHOD
			SSD_u8_ANODE

*/
u8 SSD_Au8SetSsdTypes[SSD_NO_OF_SSD]={
		SSD_u8_CATHOD,SSD_u8_ANODE
};


u8 SSD_Au8SetDefaultValues[SSD_NO_OF_SSD]={
	SSD_EIGHT,SSD_SEVEN
};


#endif /* SSD_CONFIG_H_ */
