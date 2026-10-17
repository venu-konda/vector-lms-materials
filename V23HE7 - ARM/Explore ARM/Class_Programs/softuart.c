//softuart.c
#include <LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "delay.h"

#define TXD 0 //p0.0
#define RXD 1 //p0.1
#define BAUD 104

void InitSoftUART(void)
{
	//ensure txd pin is high
	SSETBIT(IOSET0,TXD);
	//cfg txd pin as gpio out
	SETBIT(IODIR0,TXD);
	//default rxd pin is input & high
}

void SoftUART_Tx(u8 sByte)
{
	s32 i;
	//send start bit via txd pin
	SCLRBIT(IOCLR0,TXD);
	//wait for bit period i.e @baud
	delay_us(BAUD);
	//Serialize Out sByte Iteratively
	for(i=0;i<=7;i++)
	{
		//LSB to MSB order via txd
		READWRITEBIT(IOPIN0,TXD,sByte,i);
  	//wait for bit period i.e @baud
	  delay_us(BAUD);
	}
	//send stop bit via txd pin
	SSETBIT(IOSET0,TXD);
  //wait for bit period i.e @baud
	delay_us(BAUD);	
}

u8 SoftUART_Rx(void)
{
	u8 rByte;
	s32 i;
	//wait for start bit 
	while(READBIT(IOPIN0,RXD)==1);
	//wait for half of baud
	delay_us(BAUD/2);
	//Serial In Byte Iteratively 
	for(i=0;i<=7;i++)
	{
		//wait for baud
		delay_us(BAUD);
		//Read & Record bit positionally
		//LSB to MSB order via rxd pin into rByte
		READWRITEBIT(rByte,i,IOPIN0,RXD);
	}
  //wait for baud
	delay_us(BAUD);
	//wait for stop bit
  while(READBIT(IOPIN0,RXD)==0);		
	return rByte;
}
