#include "types.h"
#include "i2c.h"
#include "delay.h"

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

void i2c_eeprom_pagewrite(u8 sAddr,
	                        u8 wBuffStartAddr,
                          u8 nBytes,
                          u8 *pBytes
                         )
{
	u32 i=0;
	i2c_start();
	i2c_write(sAddr<<1);
	i2c_ack();
	i2c_write(wBuffStartAddr);
	i2c_ack();
	while(nBytes--)
	{
		i2c_write(pBytes[i++]);
		i2c_ack();
	}
	i2c_stop();
	delay_ms(10);
}

void i2c_eeprom_seqread(u8 sAddr,
	                        u8 rBuffStartAddr,
                          u8 nBytes,
                          u8 *pBytes
                         )
{
	u32 i;
	i2c_start();
	i2c_write(sAddr<<1);
	i2c_ack();
	i2c_write(rBuffStartAddr);
	i2c_ack();
	i2c_restart();
	i2c_write((sAddr<<1)|1);
	i2c_ack();
	for(i=0;i<(nBytes-1);i++)
	{
		pBytes[i]=i2c_read();
		i2c_mack();
	}
	pBytes[i]=i2c_read();
	i2c_nack();
	i2c_stop();
}
