#include<stdio.h>

int main()
{	enum week{Sun=1,Mon,Tue,Wed,Thur,Fri,Sat};
	printf("%ld\n",sizeof(enum week));
	enum week day;
	day=Mon;
	printf("%d\n",day);
}

