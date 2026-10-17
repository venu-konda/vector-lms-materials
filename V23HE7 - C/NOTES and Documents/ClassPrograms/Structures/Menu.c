#include"myheader.h"
int cnt;
int main()
{	PRODUCT Arr[MAX];
	char choice;
	while(1)
	{
		printf("A. addtocart v.viewcart d.delfromcart e.exit\n");
		printf("enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'A' : addToCart(Arr);
				   break;
			case 'V' : viewCart(Arr);
				   break;
			case 'E' : exit(0);
		}
	}
}

