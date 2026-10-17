//ca7seg_4_mux_test.c
#include <LPC21xx.h>
#include "types.h"
#include "delay.h"
#include "seg.h"
main()
{
	u32 i=1234;
	Init_7segs();
	while(1)
	{
	  disp_4_mux_segs(i);	
	}
}	
