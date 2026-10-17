//can_defines.h
#include "types.h"

//define pin functions  
#define FUN2 1

//define CFGPIN macro
#define CFGPIN(WORD,PIN,FUNC)  \
WORD=((PIN<16) ? \
((WORD&~(3<<(PIN*2)))|(FUNC<<(PIN*2))) : \
((WORD&~(3<<((PIN-16)*2)))|(FUNC<<((PIN-16)*2))))

//TD1 CAN1_TX pin no alternate function,default
#define TD1_PIN       
//define p0.25 as RD1(i.e CAN1_RX)
#define RD1_PIN_0_25  FUN2 

#define PCLK       15000000  //Hz
#define BIT_RATE   125000    //Hz
#define QUANTA     15
#define BRP        (PCLK/(BIT_RATE*QUANTA))
#define SAMPLE_POINT    	(0.7 * QUANTA)
#define TSEG1        	((u32)SAMPLE_POINT-1)
#define TSEG2        	(QUANTA-(1+TSEG1))	
#define SJW           ((TSEG2 >= 5)?4:(TSEG2-1))

//cfg values for C1BTR sfr
#define SAM  0 //0 or 1 ,sample bus 1 or 3 time(s)
#define BTR_LVAL \
(SAM<<23|((TSEG2-1)<<20)| \
((TSEG1-1)<<16)|((SJW-1)<<14)|(BRP-1))

//C1CMR sfr bit defines
#define TR_BIT   0
#define RRB_BIT  2 
#define STB1_BIT 5

//C1GSR sfr bit defines
#define RBS_BIT  0
#define TBS1_BIT 2
#define TCS1_BIT 3

//C1TFI1/C1RFS sfr bit defines
#define DLC_BITS  16
#define RTR_BIT   30
#define FF_BIT    31

//C1MOD sfr bit defines
#define RM_BIT    0

//AFMR sfr bit defines
#define ACCOFF_BIT 0
#define ACCBP_BIT 1
