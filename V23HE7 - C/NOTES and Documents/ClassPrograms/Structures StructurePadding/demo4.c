#include<stdio.h>
struct St
{
	int x;
	char s[13];
	float f;

};

int main()
{
	printf("%ld\n",sizeof(struct St));

}
