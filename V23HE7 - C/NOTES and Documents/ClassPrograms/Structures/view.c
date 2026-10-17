#include"myheader.h"

extern int cnt;

void viewCart(PRODUCT *p)
{
	int i;
	if(cnt==0)
		printf("your is empty\n");
	else
	{   printf("name\t cost\t quantity\t amount\n");
		for(i=0;i<cnt;i++)
		{
		printf("%s\t %f\t %d\t %f\n",p[i].name,p[i].cost,p[i].quantity,p[i].cost * p[i].quantity);
		}
	}
}
