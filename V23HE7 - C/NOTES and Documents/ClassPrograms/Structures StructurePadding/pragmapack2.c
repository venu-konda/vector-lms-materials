#include<stdio.h>
#pragma pack(1)
struct St
{
	char x;
	int y;
	char z;
};



int main()
{
printf("%ld",sizeof(struct St));

}
