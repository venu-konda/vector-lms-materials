#include<stdio.h>

struct DOB
{
	short int day;
	short int month;
	short int year;
};

int main()
{
	printf("%ld\n",sizeof(struct DOB));
}
