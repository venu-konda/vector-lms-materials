#include"myheader.h"
extern int cnt;
PRODUCT * addToCart(PRODUCT *p)
{
	p=realloc(p,(cnt+1)*sizeof(PRODUCT));
	printf("enter the product name\n");
	scanf("%s",p[cnt].name);
	printf("enter the cost\n");
	scanf("%f",&p[cnt].cost);
	printf("enter the quantity\n");
	scanf("%d",&p[cnt].quantity);
	cnt++;
	return p;

}
