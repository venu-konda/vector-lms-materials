//uart.c
#include <LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "pin_function_defines.h"
#include "uart_defines.h"

void uart_isr(void) __irq
{
	u8 t;
	t=U0IIR;
	t=(t>>1)&7;
	if(t==1)
	{	
	  CPLBIT(IOPIN0,UART_TX_STATUS_LED);
	}
	else if(t==2)
	{
		CPLBIT(IOPIN0,UART_RX_STATUS_LED);
		t=U0RBR;
	}
	VICVectAddr=0;
}

void InitUART(void)
{
	//cfg pin connect block for
	//p0.0 as TXD0
	CFGPIN(PINSEL0,TXD0,FUNC2);
	//p0.1 as RXD0
	CFGPIN(PINSEL0,RXD0,FUNC2);
	//cfg UART for 8data bit,no parity,1stopbit(8N1)
	U0LCR=1<<DLAB_BIT|WORD_LEN;
  //cfg baudrate generator
	U0DLM=LOADVAL>>8;
	U0DLL=LOADVAL;
	//disable dlab bit
	CLRBIT(U0LCR,DLAB_BIT);
	
	#if UART_INTS_EN > 0
	SETBIT(IODIR0,UART_TX_STATUS_LED);
	SETBIT(IODIR0,UART_RX_STATUS_LED);
	
	U0IER=1<<THRE_INT_EN_BIT|1<<RBR_INT_EN_BIT;
	//VICIntSelect=0;
	VICIntEnable=1<<6;
	VICVectCntl0=0x20|6;
	VICVectAddr0=(u32 ) uart_isr;
	#endif
	
}

void UART_Tx(u8 sByte)
{
	//place byte into trasmit buffer
	U0THR=sByte;
	//wait until transmission completion status
	while(READBIT(U0LSR,TEMT_BIT)==0);
}

u8 UART_Rx(void)
{
	//wait until reception completion status
	while(READBIT(U0LSR,RDR_BIT)==0);
	//read & return recv data from recv buffer
	return U0RBR;
}

void UART_puts(s8 *s)
{
	while(*s)
		UART_Tx(*s++);
}

s8 * UART_gets(void)
{
	s32 i=0;
  static s8 a[100];
	while(1)
	{
		a[i]=UART_Rx();
		UART_Tx(a[i]);
		if((a[i]=='\r') || (a[i]=='\n'))
		{
			break;
		}
		i++;
	}
	a[i]='\0';
	return a;
}
