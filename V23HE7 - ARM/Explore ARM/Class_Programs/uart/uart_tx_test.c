//uart_tx_test.c
#include "uart.h"
#include "delay.h"
main()
{
	InitUART();
	while(1)
	{
		UART_Tx('A');
		delay_ms(500);
	}
}
