//electronic_dice_3.c
#include <LPC21xx.h>
#include <stdlib.h>
#include "types.h"
#include "delay.h"
#include "lcd_defines.h"
#include "lcd.h"
#define SW     4//p0.4
main()
{
	u32 i=0,j=1;
	InitLCD();
	StrLCD("Electronic Dice");
	while(1)
	{
		//while switch not pressed
		while(((IOPIN0>>SW)&1))
		{
			CmdLCD(GOTO_LINE2_POS0);
			StrLCD("Roll Dice !");
			delay_ms(100);
			CmdLCD(GOTO_LINE2_POS0);
			StrLCD("           ");
			delay_ms(100);
		}
		//initiate dice rolling & wait to settle
		while(((IOPIN0>>SW)&1)==0)
		{
			  srand(j++);
			  i=(rand()%6)+1;
  			CmdLCD(GOTO_LINE2_POS0);
			  StrLCD("Rolling...");			  
		}
		CmdLCD(GOTO_LINE2_POS0);
		StrLCD("               ");	
		U32LCD(i);
    delay_ms(3000);
	}
}	
