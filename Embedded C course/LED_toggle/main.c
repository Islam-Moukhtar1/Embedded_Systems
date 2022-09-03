/*
 * main.c
 *
 *  Created on: Sep 3, 2022
 *      Author: islam
 */
#include<stdio.h>
#define RCC_Base 0x40021000
#define GPIOA_BASE 0x40010800
#define ApB2ENR (RCC_Base + 0x18)
#define CRH (GPIOA_BASE +0x04)

typedef volatile unsigned int vuint32_t;
typedef union{
	vuint32_t ALL_FIELDS;
	struct{
		vuint32_t reserved : 13; //0 -> 12
		vuint32_t pin13 : 1;
	}pin;
}R_ODR_t;

int main(void)
{
	volatile R_ODR_t* R_ODR = (volatile R_ODR_t*)(GPIOA_BASE + 0x0C);
	ApB2ENR |= 1<<2;
	CRH &= 0xff0fffff; //reset bits 20--->23
	CRH |= 0x00200000; //set them to 0100 (2 base 16)
	while(1)
	{
		R_ODR->pin.pin13 = 1; //set pin 13
		for(int i=0;i<5000;i++); //dummy delay
		R_ODR->pin.pin13 = 0; //reset pin 13
		for(int i=0;i<5000;i++); //dummy delay
	}
	return 0;
}
