//uart_tx_test_2.c
#include "uart.h"
#include "delay.h"
main()
{
	s8 *t;
	InitUART();
	while(1)
	{
		UART_puts("Enter any string\n\r");
	  t=UART_gets();
		UART_puts("U Entered\n\r");
	  UART_puts(t);
		UART_puts("\r\n");
	}
}
