#include<stdio.h>
union  tag
{
	float f;
	int i;
};
int main()
{
	union tag var;
	int bit;
	printf("Enter float data:");
	scanf("%f",&var.f);
	for(bit=31;bit>=0;bit--)
		printf("%d",(var.i >> bit)&1);
	printf("\n");
}
