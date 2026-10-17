#include"myheader.h"

extern int cnt;

PRODUCT * delProduct(PRODUCT *p)
{	int i=0;
	char prod[20];
	if(cnt==0)
		printf("Cart is empty\n");
	else
	{
	printf("enter the product to be deleted\n");
	scanf("%s",prod);
	for(i=0;i<cnt;i++)
	{
		if(strcmp(prod,p[i].name)==0)
		{
			memmove(p+i,p+i+1,(cnt-i-1)*sizeof(PRODUCT));
			cnt--;
			p=realloc(p,cnt*sizeof(PRODUCT));
			return p;
		}
	}
	printf("%s is not found\n",prod);
	}
	return p;
}
