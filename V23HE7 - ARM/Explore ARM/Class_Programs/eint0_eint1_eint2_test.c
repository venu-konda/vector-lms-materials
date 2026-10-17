//eint0_eint1_eint2_test.c
//for fiq,v.irq,nv.irq respectively
#include <LPC21xx.h>
#include "types.h"
#include "eints_isr.h"
u32 count;

main()
{
	Enable_EINTs();
	while(1)
	{
		count++;
	}
}
