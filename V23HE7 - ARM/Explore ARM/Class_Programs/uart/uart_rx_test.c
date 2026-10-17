//uart_rx_test.c
#include "uart.h"
#include "delay.h"
#include <LPC21xx.h>
#include "defines.h"
main()
{
	InitUART();
	SETBIT(IODIR0,7);
	while(1)
	{
		if(UART_Rx()=='A')
		  CPLBIT(IOPIN0,7);
	}
}
