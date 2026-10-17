#include <stdio.h>


#define SETBIT(DATA,BITPOS) (DATA |= (1<<BITPOS))
#define CLRBIT(DATA,BITPOS) (DATA &= ~(1<<BITPOS))
#define TESTBIT(DATA,BITPOS) ((DATA>>BITPOS)&1)



int main()
{
	int i,val=7,bitpos=3;
	
	printf("**************************************************************************************\n");
	printf("**************************************************************************************\n\n");
	printf(":SETBIT Macro:\n");
	for(i=31;i>=0;i--)
		printf("%d ",TESTBIT(val,i));
	printf("-- i/p\n");
	SETBIT(val,bitpos);
	
	for(i=31;i>=0;i--)
		printf("%d ",TESTBIT(val,i));
	printf("-- o/p\n");

	printf("SETBIT Macro : Step by step by process");
	
	printf("\n");
	val=7;
	for(i=31;i>=0;i--)
		printf("%d ",TESTBIT(val,i));

	printf("-- val=7\n");
	for(i=31;i>=0;i--)
		printf("%d ",TESTBIT((1<<bitpos),i));
	
	printf("-- 1<<bitpos\n");
	printf("---------------------------------------------------------------\n");
	for(i=31;i>=0;i--)
		printf("%d ",TESTBIT((val|(1<<bitpos)),i));

	printf("-- val|(1<<bitpos)\n");

	printf("\n");
        
	printf("**************************************************************************************\n");
	printf("**************************************************************************************\n\n");
	val = 15;
	printf(":CLRBIT Macro:\n");
	for(i=31;i>=0;i--)
		printf("%d ",TESTBIT(val,i));
	printf("-- i/p\n");
	CLRBIT(val,bitpos);
	
	for(i=31;i>=0;i--)
		printf("%d ",TESTBIT(val,i));
	printf("-- o/p\n");

	printf("CLRBIT Macro : Step by step by process");
	
	printf("\n");
	val=15;
	for(i=31;i>=0;i--)
		printf("%d ",TESTBIT((1<<bitpos),i));
	
	printf("-- 1<<bitpos\n\n");
	for(i=31;i>=0;i--)
		printf("%d ",TESTBIT((~(1<<bitpos)),i));

	printf("-- ~(1<<bitpos)\n");
	
	for(i=31;i>=0;i--)
		printf("%d ",TESTBIT(val,i));

	printf("-- val=15\n");
	printf("---------------------------------------------------------------\n");
	for(i=31;i>=0;i--)
		printf("%d ",TESTBIT((val&=~(1<<bitpos)),i));

	printf("-- val&=~(1<<bitpos)\n");
	
	printf("\n");


	printf("**************************************************************************************\n");
	printf("**************************************************************************************\n\n");

}
