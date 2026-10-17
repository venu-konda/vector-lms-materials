//ca7seg_test.c
#include <LPC21xx.h>
#include "types.h"
#include "delay.h"

#define CA7SEG 8
u8 segLUT[10]=
{ 
	0xc0,0xF9,0xa4,0xb0,0x99,
	0x92,0x82,0xF8,0x80,0x90
};

main()
{
	u32 i;
	//cfg p0.8 to p0.15 pins as gpio for ca7seg
	IODIR0|=0xff<<CA7SEG;
	
	while(1)
	{
		for(i=0;i<10;i++)
		{
			IOPIN0=segLUT[i]<<CA7SEG;
			delay_ms(1000);
		}
	}
}	
