/*
 * main.c
 *
 *  Created on: Jan 22, 2019
 *      Author: Killua
 */

#define  DDRD ((Register*)0x31)
#define  PORTB ((Register*)0x32)
#define  DDRA ((Register*)0x3A)
#define  PORTA ((Register*)0x3B)
#define TRUE 1

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






int main(){
	// write 9 to finish port

	DDRD->ByteAccess = 0xFF;
	DDRA->ByteAccess = 0xFF;
	while(TRUE){
		// the next line will write 9
		PORTB->ByteAccess = 0x6f;   //0110 1111
		// the next line will write 3
		PORTA->ByteAccess = 0x4f;   // 0100 1111
	}
	return 0 ;
}
