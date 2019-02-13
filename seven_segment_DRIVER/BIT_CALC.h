/*
************************************
ATmega32 Conigurations Header File
Author : Ahmed Elsaka
************************************
*/

#ifndef BIT_CALC_H_
#define BIT_CALC_H_


/*Bit Manipulation APIs*/
#define BIT_CALC_SET_BIT(PORT,BIT_NO) (PORT)|=(TRUE<<(BIT_NO))

#define BIT_CALC_CLEAR_BIT(PORT,BIT_NO) (PORT) &=~(TRUE<<(BIT_NO))

#define BIT_CALC_TOGGLE_BIT(PORT,BIT_NO) (PORT)^=(TRUE<<(BIT_NO))

#define BIT_CALC_ASSIGN_BIT(PORT,BIT_NO,VAL) do{\
    if(VAL!=FALSE && VAL != TRUE) VAL=FALSE; \
    (PORT)=((PORT)&(~(TRUE<<(BIT_NO))))|((VAL)<<(BIT_NO));\
    }while(FALSE)

#define BIT_CALC_SET_LOW_NIBBLE(PORT) (PORT)|=0x0F

#define BIT_CALC_SET_HIGH_NIBBLE(PORT) (PORT)|=0xF0

#define BIT_CALC_CLEAR_LOW_NIBBLE(PORT) (PORT)&=0xF0

#define BIT_CALC_CLEAR_HIGH_NIBBLE(PORT) (PORT)&=0x0F

#define BIT_CALC_TOGGLE_LOW_NIBBLE(PORT) (PORT)^=0x0F

#define BIT_CALC_TOGGLE_HIGH_NIBBLE(PORT) (PORT)^=0xF0

#define BIT_CALC_GET_BIT(PORT,BIT_NO) (PORT)=((PORT)>>(BIT_NO))&0x01

#define BIT_CALC_SET_PORT_DIRECTION(PORT,DIRECTION) (PORT)=(DIRECTION)

#define BIT_CALC_SET_PORT_VALUE(PORT,VALUE) (PORT)=(VALUE)

/*Functions Prototype*/




#endif // STD_TYPES_H_INCLUDED
