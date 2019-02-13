/*
 * main.c
 *
 *  Created on: Jan 21, 2019
 *      Author: Killua
 */


/*****************************/
 /* main.c                    */
 /*                           */
 /*  Created on: Jan 20, 2019 */
 /*      Author: Killua       */
 /*****************************/

typedef unsigned char u8;

typedef union {
	struct {
		u8 Bit0 :1;
		u8 Bit1 :1;
		u8 Bit2 :1;
		u8 Bit3 :1;
		u8 Bit4 :1;
		u8 Bit5 :1;
		u8 Bit6 :1;
		u8 Bit7 :1;
	}BitAccess;
	u8 ByteAccess;
}Register;

void main(void){
	/* set DDRD output */
	((Register*) 0x31)->ByteAccess = 0xff; // 0x31 = DDRD address

	while(1){
		/*set D0 to High level (5v)
		 * PORTD -> bit 0 = 1
		 */
		/*
		// enable fisrt 7seg = 0
		((Register*) 0x32)->BitAccess.Bit0  = 0;
		((Register*) 0x32)->BitAccess.Bit1  = 1;
		((Register*) 0x32)->BitAccess.Bit2  = 1;
		((Register*) 0x32)->BitAccess.Bit3  = 1;
		((Register*) 0x32)->BitAccess.Bit4  = 1;
		((Register*) 0x32)->BitAccess.Bit5  = 1;
		((Register*) 0x32)->BitAccess.Bit6  = 1;
		((Register*) 0x32)->BitAccess.Bit7  = 1;
		*/
		((Register*) 0x32)->ByteAccess  =0xFE;
		// enable second 7seg = 7;
		((Register*) 0x32)->ByteAccess  =0xFE;
		//0111 1111 =7f
		((Register*) 0x32)->ByteAccess  =0x7F;






	}

}


