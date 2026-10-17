#include<stdio.h>
struct Time
{
	unsigned short int hr : 5;
	unsigned short int min : 6;
	unsigned short int sec : 6;
};

int main()
{
	
	struct Time t1={32,89,56};

	printf("%d : %d : %d\n",t1.hr,t1.min,t1.sec);
}

