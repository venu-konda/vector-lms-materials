#include"myheader.h"

extern int cnt;
void viewCart(PRODUCT *p)
{int i;
	if(cnt==0)
		printf("Cart is empty\n");
	else
	{	printf("name \t cost \t quantity\n");
		for(i=0;i<cnt;i++)
			printf("%10s %.2f %4d\n",p[i].name,p[i].cost,p[i].quantity);
	}
}

