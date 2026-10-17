#include<stdio.h>

#define PRINT(x) printf(#x"=%d\n",x)


int main()
{
	int a=10,b=30,c=40;
	PRINT(a);
	PRINT(b);
	PRINT(c);
}

