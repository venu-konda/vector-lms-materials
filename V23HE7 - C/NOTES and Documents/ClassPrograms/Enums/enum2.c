#include<stdio.h>

int main()
{
	enum colors{white,red,blue=5,green,pink,yellow=10,orange,black,white=100};

	printf("%d\n",white);
	printf("%d\n",green);
	printf("%d\n",white);

}
