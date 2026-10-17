//lcd_test.c
#include "lcd.h"
#include "lcd_defines.h"
#include "delay.h"

u8 cgramLUT[8]=
{
	0x1d,0x05,0x05,0x1f,0x14,0x14,0x17,0x00
};
main()
{
	InitLCD();
	CharLCD('B');
	StrLCD(" V23HE7 ");
	CmdLCD(GOTO_LINE2_POS0);
	U32LCD(123456789);
	delay_ms(2000);
	CmdLCD(CLEAR_LCD);
	S32LCD(-123456789);
	CmdLCD(GOTO_LINE2_POS0);
  F32LCD(123.456789,6);
	delay_ms(2000);
	CmdLCD(CLEAR_LCD);
  F32LCD(-123.456789,6);
	delay_ms(2000);
	CmdLCD(CLEAR_LCD);
  BinLCD(127,15);
	delay_ms(2000);
	CmdLCD(CLEAR_LCD);
  HexLCD(65534);
	BuildCGRAM(cgramLUT,8);
	CharLCD(0);
	while(1);
}
