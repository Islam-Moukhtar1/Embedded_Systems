/*
main.c
Eng. Islam Moukhtar
*/
#include<stdio.h>

typedef volatile unsigned int vuint32_t;

#define RCC_Base 0x40021000
#define GPIOA_BASE 0x40010800 

//Define pointers to write in ApB2ENR and CRH (Will be studied later) 

#define ApB2ENR *(volatile uint32_t*)(RCC_Base + 0x18)
#define CRH *(volatile uint32_t*)(GPIOA_BASE +0x04)

//Define port A of GPIO A 

typedef union {
	vuint32_t ALL_FIELDS ; 
	struct{
	vuint32_t reserved : 13; //0 -> 12
	vuint32_t pin13 : 1;
	}pin;
}R_ODR_t;

//Define a pointer to write in pin 13 
vuint32_t global_data[] = {1,2,3} ;
vuint32_t global_uninitialized_data[3] ;
vuint32_t const global_const_data[] = {1,2,3} ;
const int global_const_data_2[] = {1,2,3} ;
volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_BASE + 0x0C);

/* In main function > 1) Set the second bit of ApB2ENR
                      2) set bits 20 >>> 23 to 0010 of CRH
					  3) Toggle pin 13 of GPIO A  infinitly 
					  (WILL be understood later )
*/

void main(void)
{
	ApB2ENR |= (1<<2);
	CRH &= 0xff0fffff;
	CRH |= 0x00200000;
	while (1)
	{
		R_ODR -> pin.pin13 = 0 ;
		for(int i=0;i<5000;i++);
		R_ODR -> pin.pin13 = 1 ;
		for(int i=0;i<5000;i++);
	}
}