#include"myheader.h"
int cnt;
int main()
{	PRODUCT *cart=NULL;
	char choice;
	while(1)
	{
		printf("A. addtocart V.viewcart D.delfromcart E.exit\n");
		printf("enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'A' : cart=addToCart(cart);
				   break;
			case 'V' : viewCart(cart);
				   break;
			case 'D' : cart=delProduct(cart);
				   break;
			case 'E' : exit(0);
		}
	}
}

