#include"myheader.h"
extern int cnt;

void addToCart(PRODUCT *p)
{
	if(cnt==MAX)
		printf("Your Cart is Full\n");
	else
	{
		printf("enter the name of the product\n");
		scanf("%s",p[cnt].name);
		printf("enter the cost\n");
		scanf("%f",&p[cnt].cost);
		printf("enter the quantity\n");
		scanf("%d",&p[cnt].quantity);
		cnt++;
	}
}

