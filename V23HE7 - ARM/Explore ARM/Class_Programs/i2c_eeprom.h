//i2c_eeprom.h
#include "types.h"
void i2c_eeprom_bytewrite(u8 sAddr,
	                        u8 wBuffAddr,
                          u8 wDat
                          );

u8 i2c_eeprom_randomread(u8 sAddr,
	                       u8 rBuffAddr
                        );

void i2c_eeprom_pagewrite(u8 sAddr,
	                        u8 wBuffStartAddr,
                          u8 nBytes,
                          u8 *pBytes
                         );

void i2c_eeprom_seqread(u8 sAddr,
	                        u8 rBuffStartAddr,
                          u8 nBytes,
                          u8 *pBytes
                         );