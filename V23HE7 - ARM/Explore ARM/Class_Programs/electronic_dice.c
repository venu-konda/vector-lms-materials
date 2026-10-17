//electronic_dice.c
#include <LPC21xx.h>
#include "types.h"
#include "delay.h"
#include <stdlib.h>
#define CA7SEG 8
#define SW     2

u8 segLUT[10]=
{ 
	0xc0,0xF9,0xa4,0xb0,0x99,
	0x92,0x82,0xF8,0x80,0x90
};

main()
{
	u32 i=0,j=1;
	//cfg p0.8 to p0.15 pins as gpio for ca7seg
	IODIR0|=0xff<<CA7SEG;
	IOPIN0=segLUT[i]<<CA7SEG;
	while(1)
	{
		//initiate dice rolling & wait to settle
		while(((IOPIN0>>SW)&1)==0)
		{
			srand(j++);
			i=(rand()%6)+1;
			IOPIN0=segLUT[i]<<CA7SEG;
			delay_ms(50);
		}
		
	}
}	
