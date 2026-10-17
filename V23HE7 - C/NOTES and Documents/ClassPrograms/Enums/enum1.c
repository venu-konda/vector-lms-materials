#include<stdio.h>

int main()
{
	enum colors{white,red,blue=5,green,pink,yellow=10,orange,black};

	printf("%d\n",red);
	printf("%d\n",green);
	printf("%d\n",black);

}
