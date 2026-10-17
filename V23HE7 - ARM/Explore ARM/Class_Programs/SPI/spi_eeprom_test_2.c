//spi_eeprom_test_2.c
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

#define FOSC 12000000
#define CCLK (FOSC*5)
#define PCLK (CCLK/4)
#define SPICLK 100000
#define SPCCR_LVAL (PCLK/SPICLK)

#define SPIF_BIT 7

#define MSTR_BIT 5
#define CPOL_BIT 4
#define CPHA_BIT 3
u8 spi(u8 sDat)
{
	S0SPDR=sDat;
	while(READBIT(S0SPSR,SPIF_BIT)==0);
	return S0SPDR;
}

void Init_SPI(void)
{
	 //cfg as pin connect block for spi pins 
	 PINSEL0= 0x00001500;
	 //cfg spi for master,mode
	 S0SPCR=1<<MSTR_BIT|1<<CPOL_BIT|1<<CPHA_BIT;
	 //cfg spi speed
	 S0SPCCR=SPCCR_LVAL;
	 SETBIT(IOSET0,CS);
	 SETBIT(IODIR0,CS);
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

void spi_bytewrite(u16 wBuffAddr,u8 sDat)
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

u8 spi_byteread(u16 rBuffAddr)
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
  spi_bytewrite(0x0000,'B');
  t=spi_byteread(0x0000);
  if(t=='B')
   CPLBIT(IOPIN0,8);
}
