#include<stdio.h>

union Endianess
{
	int x;
	char y;
};

int main()
{
	union Endianess v={1};
	if(v.y==1)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
}
