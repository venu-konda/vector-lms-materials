#include<stdio.h>
#include<math.h>
int main()
{
	int num,data,rem,sum=0,cnt=0;
	printf("enter num");
	scanf("%d",&num);
	data=num;
	while(data)
	{
		cnt++;
		data=data/10;
	}
	data=num;
	while(data)
	{
		rem=data%10;
		sum=sum+pow(rem,cnt);
		data=data/10;
	}
	if(sum==num)
		printf("armstrong");
	else
		printf("not armstrong");
}


