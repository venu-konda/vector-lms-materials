#include<LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "delay.h"
#define SCL 2 //p0.2 pin
#define SDA 3 //p0.3 pin
#define I2C_EEPROM_SA 0x50
#define sLED 4
#define fLED 5
u8  var __attribute__((at(0x40000000)));

void i2c_start(void)
{
SSETBIT(IOSET0,SDA);
delay_us(1);
SSETBIT(IOSET0,SCL);
delay_us(1);
SETBIT(IODIR0,SDA);
delay_us(1);
SETBIT(IODIR0,SCL);
delay_us(1);	
SSETBIT(IOCLR0,SDA);
delay_us(1);	
}

void i2c_ack(void)
{
SCLRBIT(IOCLR0,SCL);
delay_us(1);	
SSETBIT(IOSET0,SDA);
delay_us(1);	
CLRBIT(IODIR0,SDA);
delay_us(1);  
SSETBIT(IOSET0,SCL);
delay_us(1); 	
while(READBIT(IOPIN0,SDA)==1);
SETBIT(IODIR0,SDA);
delay_us(1);
}
void i2c_restart(void)
{
SCLRBIT(IOCLR0,SCL); 
delay_us(1);	
SSETBIT(IOSET0,SDA);
delay_us(1);	
SSETBIT(IOSET0,SCL); 
delay_us(1);	
SCLRBIT(IOCLR0,SDA); 
}

void i2c_write(u8 sDat)
{
s32 i;
for(i=7;i>=0;i--)
{
SCLRBIT(IOCLR0,SCL);
delay_us(1);		
READWRITEBIT(IOPIN0,SDA,sDat,i);	
delay_us(1);		
SSETBIT(IOSET0,SCL);
delay_us(1);
}
}
void i2c_stop(void)
{
SCLRBIT(IOCLR0,SCL); 
delay_us(1);	
SCLRBIT(IOCLR0,SDA); 
delay_us(1);	
SSETBIT(IOSET0,SCL); 
delay_us(1);	
SSETBIT(IOSET0,SDA);
delay_us(1);
}
void i2c_nack(void)
{
SCLRBIT(IOCLR0,SCL); 
delay_us(1);	
SSETBIT(IOSET0,SDA); 
delay_us(1);	
SSETBIT(IOSET0,SCL); 
delay_us(1);	
}

u8 i2c_read(void)
{  s32 i;	u8 buff;
CLRBIT(IODIR0,SDA); 
delay_us(1);	
  for(i=7;i>=0;i--)
{
SCLRBIT(IOCLR0,SCL);		
delay_us(1);
SSETBIT(IOSET0,SCL);
delay_us(1);	
READWRITEBIT(buff,i,IOPIN0,SDA);
delay_us(1);	
}
SETBIT(IODIR0,SDA); 
delay_us(1);	
  return buff;
}

void i2c_mack(void)
{
	//SCL_LOW 
delay_us(1);	
	//SDA_LOW , while slave should release sda
delay_us(1);	
	//SCL_HIGH;//for S to read ack given by M
delay_us(1);	
	//SCL_LOW;
delay_us(1);	
              //SDA_HIGH;//to release SDA
}        

void i2c_eeprom_bytewrite(u8 sAddr,
	                        u8 wBuffAddr,
                          u8 wDat
                          )
{
	i2c_start();
	i2c_write(sAddr<<1);
	i2c_ack();
	i2c_write(wBuffAddr);
	i2c_ack();
	i2c_write(wDat);
	i2c_ack();
	i2c_stop();
	delay_ms(10);
	
}

u8 i2c_eeprom_randomread(u8 sAddr,
                         u8 rBuffAddr
                        )
{
	u8 rDat;
	
	i2c_start();
	i2c_write(sAddr<<1);
	i2c_ack();
	i2c_write(rBuffAddr);
	i2c_ack();
	i2c_restart();
	i2c_write((sAddr<<1)|1);
	i2c_ack();
	rDat=i2c_read();
	i2c_nack();
	i2c_stop();
	
	return rDat;
}

u8 rDat __attribute__((at(0x40000000)));
main()
{
  //s32 i;
// for(i=0;i<26;i++)
 // i2c_eeprom_bytewrite(I2C_EEPROM_SA,i,'a'+i);
	rDat=i2c_eeprom_randomread(0x50,0);
 while(1);
}

