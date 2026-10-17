//uart_tx_interrupt_test.c
#include "uart.h"
#include "delay.h"
#include <LPC21xx.h>

main()
{
	u32 i;
	InitUART();
	while(1)
	{
		//UART_Tx('A');
		//U0THR='A';
		//delay_ms(100);
	}
}
