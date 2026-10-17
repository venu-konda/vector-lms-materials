// spi_eeprom_test_1.c
#include <LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "delay.h"

#define SCK  4
#define MISO 5
#define MOSI 6
#define CS   7

#define READ  0x03
#define WRITE 0x02
#define WREN  0x06
#define WRDI  0x04

void InitSPI(void)
{
	SSETBIT(IOSET0,CS);
	SETBIT(IODIR0,CS);
	SSETBIT(IOSET0,SCK);
	SETBIT(IODIR0,SCK);
	SSETBIT(IOSET0,MOSI);
	SETBIT(IODIR0,MOSI);
	//default miso is input
}
u8 spi(u8 sDat)
{
  s32 i; u8 rDat=0;
  for(i=7;i>=0;i--)
  {
    SCLRBIT(IOCLR0,SCK);
		delay_us(1);
    READWRITEBIT2(IOPIN0,MOSI,sDat,i);
		delay_us(1);
    SSETBIT(IOSET0,SCK);
		delay_us(1);
		READWRITEBIT2(rDat,i,IOPIN0,MISO);
		delay_us(1);
  }
  return rDat;
}

void WriteEnable(void)
{
  //make chip select low
  SCLRBIT(IOCLR0,CS); 
  //spi transfer WREN cmd
  spi(WREN);
  //make chip select high
  SSETBIT(IOSET0,CS);
}

void WriteDisable(void)
{
  //make chip select low
  SCLRBIT(IOCLR0,CS);
  //spi tranfer WRDI cmd
  spi(WRDI);
  //make chip select high
  SSETBIT(IOSET0,CS);
}

void ByteWrite(u16 wBuffAddr,u8 wDat)
{
  WriteEnable();
  //make chip select low
  SCLRBIT(IOCLR0,CS); 
  //spi tranfer WRITE cmd
  spi(WRITE);
  //spi transfer MSByte of Mem Addr
  spi(wBuffAddr>>8);
  //spi transfer LSByte of Mem Addr
  spi(wBuffAddr);
  //spi tranfer of wDat
  spi(wDat);
  //make chip select high
  SSETBIT(IOSET0,CS);
  WriteDisable();   
}


u8 ByteRead(u16 rBuffAddr)
{
  u8 rDat;
  //make chip select low
  SCLRBIT(IOCLR0,CS); 
  //spi tranfer WRITE cmd
  spi(READ);
  //spi transfer MSByte of Mem Addr
  spi(rBuffAddr>>8);
  //spi transfer LSByte of Mem Addr
  spi(rBuffAddr);
  //spi tranfer of dummy byte
  rDat=spi(0x00);
  //make chip select high
  SSETBIT(IOSET0,CS);
  return rDat;
}

main()
{
	 InitSPI();
   SETBIT(IODIR0,2);
   ByteWrite(0x0000,'0');
	 /*
   if(ByteRead(0x0000)=='A')
     CPLBIT(IOPIN0,2);
	*/
	 while(1);
}
