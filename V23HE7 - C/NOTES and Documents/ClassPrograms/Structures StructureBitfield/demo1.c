#include<stdio.h>

struct DOB
{
	short int day:5;
	short int month:4;
	short int year;
};

int main()
{	struct DOB today={13,3,2024};
	printf("%ld\n",sizeof(struct DOB));
	printf("%d-%d-%d\n",today.day,today.month,today.year);

}
