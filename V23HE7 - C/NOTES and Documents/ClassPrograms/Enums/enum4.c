#include<stdio.h>

int main()
{
	enum colors{white,red,blue=5,green,pink,yellow=10,orange,black=5};
	blue=15; // lvalue error

	printf("%d\n",blue);
	printf("%d\n",green);
	printf("%d\n",black);

}
