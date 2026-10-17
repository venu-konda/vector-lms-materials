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
	IODIR0|=0xff<<CA7SEG_2_MUX|1<<DSEL1|1<<DSEL2;
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
