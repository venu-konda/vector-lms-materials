#include<stdio.h>
struct Student
{
	int roll;
	char name[20];
	float per;
};

int main()
{
	struct Student A[3];
	int i;
	for(i=0;i<3;i++)
	{
		printf("enter the roll\n");
		scanf("%d",&A[i].roll);
		printf("enter the name\n");
		scanf("%s",A[i].name);
		printf("enter the per\n");
		scanf("%f",&A[i].per);
	}
	for(i=0;i<3;i++)
	{
	printf("%d %s %f\n",A[i].roll,A[i].name,A[i].per);
	}
}
