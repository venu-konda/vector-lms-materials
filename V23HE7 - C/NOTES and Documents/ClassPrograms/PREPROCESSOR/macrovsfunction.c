#include <stdio.h>

#define EVENNUMRANGE(MIN,MAX) {int i; \
	                       for(i=MIN;i<MAX;i++) \
	                	{if(i%2==0)printf("%d ",i);}}

/*
void evennumrange(int min,int max)
{
	int i;
	for(i=min;i<max;i++)
	{
		if(i%2 == 0)
			printf("%d ",i);
	}
}
*/


int main()
{
/*	
	evennumrange(10,100);	
	evennumrange(10,100);
	evennumrange(10,100);
	evennumrange(10,100);
	evennumrange(10,100);
*/
	EVENNUMRANGE(10,100);
	EVENNUMRANGE(10,100);
	EVENNUMRANGE(10,100);
	EVENNUMRANGE(10,100);
	EVENNUMRANGE(10,100);
	
	return 0;
}
