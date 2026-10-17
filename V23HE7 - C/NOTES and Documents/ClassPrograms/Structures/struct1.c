#include<stdio.h>
struct Student
{
	int roll;
	char name[20];
	float per;
};

int main()
{
	struct Student V1={123,"abcdef",67.8};
	struct Student V2,V3;
	V2.roll=125;
	strcpy(V2.name,"xyz");
	V2.per=78.9;

	printf("enter the roll\n");
	scanf("%d",&V3.roll);
	printf("enter the name\n");
	scanf("%s",V3.name);
	printf("enter the percentage\n");
	scanf("%f",&V3.per);

	printf("%d %s %f\n",V1.roll,V1.name,V1.per);
	printf("%d %s %f\n",V2.roll,V2.name,V2.per);
	printf("%d %s %f\n",V3.roll,V3.name,V3.per);
}







