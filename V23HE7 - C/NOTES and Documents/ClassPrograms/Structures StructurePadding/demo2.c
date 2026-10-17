#include<stdio.h>
struct St
{
	char x;
	int y;
	char z;
};

int main()
{
	printf("%ld\n",sizeof(struct St));

}
