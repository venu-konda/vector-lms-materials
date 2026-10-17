//can.c
#include "types.h"
#include <LPC21xx.h>
#include "defines.h"
#include "can_defines.h"
#include "can.h"

void Init_CAN1(void)
{
	//cfg p0.25 as RD1 pin,TD1 is def
	CFGPIN(PINSEL1,25,RD1_PIN_0_25);
	//place can1 controller into reset mode
	SETBIT(C1MOD,RM_BIT);
	//cfg bit rate
	C1BTR=BTR_LVAL;
	//cfg AFMR for accepting any message
	SETBIT(AFMR,ACCBP_BIT);
	CLRBIT(AFMR,ACCOFF_BIT);
	
	//re-enable can1 controller
	CLRBIT(C1MOD,RM_BIT);
}

void CAN1_Tx(CANF txF)
{
	//chk if transmit buff ok to write
	while(READBIT(C1GSR,TBS1_BIT)==0);
	//load txID
	C1TID1=txF.ID;
	//cfg rtr & dlc
	C1TFI1=txF.BFV.RTR<<RTR_BIT|
	       txF.BFV.DLC<<DLC_BITS;
	//chk for frame type DF/RF 
	if(txF.BFV.RTR==0)//if DF
	{
		C1TDA1=txF.Data1;
		C1TDB1=txF.Data2;		
  }
  //select transmit buffer 1 
	//& initiate transmission
  C1CMR=1<<STB1_BIT|1<<TR_BIT;
  //wait for transmission completion status
  while(READBIT(C1GSR,TCS1_BIT)==0);	
}
