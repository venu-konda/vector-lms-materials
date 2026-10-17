//spi_eeprom_test_1.c
#include <LPC21xx.h>
#include "types.h"
#include "delay.h"
#include "defines.h"

#define CLK  4 //p0.4
#define MISO 5 //p0.5
#define MOSI 6 //p0.6
#define CS   7 //p0.7

#define WREN  0x06
#define WRDI  0x04
#define WRITE 0x02
#define READ  0x03

u8 spi(u8 sDat)
{
	s32 i;
	u8 rDat;
	for(i=7;i>=0;i--)
	{
		SCLRBIT(IOCLR0,CLK);
		delay_us(1);
		READWRITEBIT(IOPIN0,MOSI,sDat,i);
		delay_us(1);
		SSETBIT(IOSET0,CLK);
		delay_us(1);
		READWRITEBIT(rDat,i,IOPIN0,MISO);
		delay_us(1);
	}
	return rDat;
}

void Init_SPI(void)
{
	 //CS,MOSI,CLK all high initially
	 IOSET0=1<<CLK|1<<MOSI|1<<CS;
	 //cfg as gpio out pins 
	 IODIR0|=1<<CLK|1<<MOSI|1<<CS;
   //miso default input pin	
}

void WriteEnable(void)
{
  //master makes cs line low
	SCLRBIT(IOCLR0,CS);
  //activate write enable latch
  spi(WREN);
  //master makes cs line high 
	SSETBIT(IOSET0,CS);
}

void WriteDisable(void)
{
  //master makes cs line low
	SCLRBIT(IOCLR0,CS);

  //deactivate write enable latch
  spi(WRDI);
  //master makes cs line high 
	SSETBIT(IOSET0,CS);
}

void ByteWrite(u16 wBuffAddr,u8 sDat)
{
  WriteEnable();
  //make cs low
	SCLRBIT(IOCLR0,CS);
	
  spi(WRITE);
  spi(wBuffAddr>>8);
  spi(wBuffAddr);
  spi(sDat);
  //make cs high
	SSETBIT(IOSET0,CS);
	delay_ms(10);
  WriteDisable(); 
  
}

u8 ByteRead(u16 rBuffAddr)
{
  u8 rDat; 
  //make cs low
	SCLRBIT(IOCLR0,CS);
  spi(READ);
  spi(rBuffAddr>>8);
  spi(rBuffAddr);
  rDat=spi(0x00);
  //make cs high
	SSETBIT(IOSET0,CS);
  return rDat;
}
main()
{
  u8 t;
  Init_SPI();
	SETBIT(IODIR0,8);
  ByteWrite(0x0000,'A');
  t=ByteRead(0x0000);
  if(t=='A')
   CPLBIT(IOPIN0,8);
}
