#include<stdio.h>

int main()
{	enum week{Sun=1,Mon,Tue,Wed,Thur,Fri,Sat};
	int day;
	printf("enter the day\n");
	scanf("%d",&day);
	if(day==Sun)
		printf("Its a Sunday\n");
	else if(day==Mon)
		printf("Its a Monday\n");
	else if(day==Tue)
		printf("Its a Tuesday\n");
	else if(day==Wed)
		printf("Its a Wednesday\n");
	else if(day==Thur)
		printf("Its a Thursday\n");
	else if(day==Fri)
		printf("Its a Friday\n");
	else if(day==Sat)
		printf("Its a Saturday\n");
	else 
		printf("Invalid\n");
}

