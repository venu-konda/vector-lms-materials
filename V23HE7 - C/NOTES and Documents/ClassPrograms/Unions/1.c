#include<stdio.h>

union Ut
{
	char x;
	int y;
};

int main()
{
	union Ut var;
	printf("enter the y value\n");
	scanf("%d",&var.y);
	printf("%d\n",var.y);

	printf("%c\n",var.x);

}
