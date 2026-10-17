//ca7seg_2_mux_test.c
#include <LPC21xx.h>
#include "types.h"
#include "delay.h"
#define CA7SEG_2_MUX 8
#define DSEL1        16
#define DSEL2        17
u8 segLUT[10]=
{ 
	0xc0,0xF9,0xa4,0xb0,0x99,
	0x92,0x82,0xF8,0x80,0x90
};

main()
{
	u32 i=25;
	//cfg p0.8 to p0.17 pins as gpio for ca7seg
	IODIR0|=0xff<<CA7SEG_2_MUX|1<<DSEL1|1<<DSEL2;
	
	while(1)
	{
		//for(i=0;i<100;i++)
		{
			IOPIN0=segLUT[i/10]<<CA7SEG_2_MUX;
			//turn on seg1
			IOSET0=1<<DSEL1;
			delay_ms(5);// on period
			//turn off seg1
			IOCLR0=1<<DSEL1;
			
			IOPIN0=segLUT[i%10]<<CA7SEG_2_MUX;
			//turn on seg1
			IOSET0=1<<DSEL2;
			delay_ms(5);//on period
			//turn off seg1
			IOCLR0=1<<DSEL2;
		}
	}
}	
