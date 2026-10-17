//softuart_rx.c
#include "softuart.h"
#include <LPC21xx.h>
#include "defines.h"
u8 rByte __attribute__ ((at(0x40000010)));
main()
{
	s32 i;
	InitSoftUART();
	SETBIT(IODIR0,4);
	while(1)
	{
		 rByte=SoftUART_Rx();
		 if(rByte=='A')
			CPLBIT(IOPIN0,4);
	}
}
