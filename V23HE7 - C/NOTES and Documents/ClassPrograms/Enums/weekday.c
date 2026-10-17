#include<stdio.h>

int main()
{
	int day;
	printf("enter the day\n");
	scanf("%d",&day);
	if(day==1)
		printf("Its a Sunday\n");
	else if(day==2)
		printf("Its a Monday\n");
	else if(day==3)
		printf("Its a Tuesday\n");
	else if(day==4)
		printf("Its a Wednesday\n");
	else if(day==5)
		printf("Its a Thursday\n");
	else if(day==6)
		printf("Its a Friday\n");
	else if(day==7)
		printf("Its a Saturday\n");
	else 
		printf("Invalid\n");
}

