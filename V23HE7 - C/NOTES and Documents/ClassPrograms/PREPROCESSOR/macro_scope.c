#include <stdio.h>

//#define ADD(a,b) a+b

void f1();

int main()
{
#define ADD(a,b) a+b
	printf("2+3=%d\n",ADD(2,3));
	f1();	

}

void f1()
{
	printf("5+3=%d\n",ADD(5,3));

}
