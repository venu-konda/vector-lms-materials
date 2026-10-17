//seg.c
#include "types.h"
#include <LPC21xx.h>
#include "delay.h"
#include "seg_defines.h"
u8 segLUT[10]=
{ 
	0xc0,0xF9,0xa4,0xb0,0x99,
	0x92,0x82,0xF8,0x80,0x90
};

void Init_7segs()
{
	//cfg p0.8 to p0.17 pins as gpio for ca7seg
	IODIR0|=0xff<<CA7SEG_4_MUX|1<<DSEL1|
	        1<<DSEL2|1<<DSEL3|1<<DSEL4;
}

void disp_2_mux_segs(u8 i)
{
 			IOPIN0=segLUT[i/10]<<CA7SEG_2_MUX;
			//turn on seg1
			IOSET0=1<<DSEL1;
			delay_ms(1);// on period
			//turn off seg1
			IOCLR0=1<<DSEL1;
					
			IOPIN0=segLUT[i%10]<<CA7SEG_2_MUX;
			//turn on seg2
			IOSET0=1<<DSEL2;
			delay_ms(1);//on period
			//turn off seg1
			IOCLR0=1<<DSEL2;

}
/*
void disp_4_mux_segs(u16 i)
{
 			IOPIN0=segLUT[i/1000]<<CA7SEG_4_MUX;
			//turn on seg1
			IOSET0=1<<DSEL1;
			delay_ms(1);// on period
			//turn off seg1
			IOCLR0=1<<DSEL1;
					
			IOPIN0=segLUT[(i/100)%10]<<CA7SEG_4_MUX;
			//turn on seg2
			IOSET0=1<<DSEL2;
			delay_ms(1);//on period
			//turn off seg2
			IOCLR0=1<<DSEL2;

	    IOPIN0=segLUT[(i%100)/10]<<CA7SEG_4_MUX;
			//turn on seg3
			IOSET0=1<<DSEL3;
			delay_ms(1);//on period
			//turn off seg3
			IOCLR0=1<<DSEL3;
	
	    IOPIN0=segLUT[i%10]<<CA7SEG_4_MUX;
			//turn on seg4
			IOSET0=1<<DSEL4;
			delay_ms(1);//on period
			//turn off seg4
			IOCLR0=1<<DSEL4;
}
*/

void disp_4_mux_segs(u16 i)
{
	u32 j,k=i;
	for(j=19;j>=16;j--)
	{
		  i=k%10;
		  k=k/10;
 			IOPIN0=segLUT[i]<<CA7SEG_4_MUX;
			//turn on seg1
			IOSET0=1<<j;
			delay_ms(1);// on period
			//turn off seg1
			IOCLR0=1<<j;
	}				
}
