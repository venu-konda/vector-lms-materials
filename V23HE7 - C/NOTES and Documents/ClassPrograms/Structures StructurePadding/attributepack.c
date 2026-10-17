#include<stdio.h>

struct St
{
	char x;
	int y;
}__attribute__((packed));

int main()
{
	printf("%ld\n",sizeof(struct St));
}
