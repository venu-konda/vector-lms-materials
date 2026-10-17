//softuart_tx.c
#include "softuart.h"
#include <LPC21xx.h>
#include "defines.h"
#include "delay.h"
main()
{
	InitSoftUART();
	while(1)
	{
		SoftUART_Tx('A');
		delay_ms(500);
	}
}
