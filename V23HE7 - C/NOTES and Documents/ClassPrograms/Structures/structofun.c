#include<stdio.h>
typedef struct Student
{
	int roll;
	char name[20];
	float marks;
}STUDENT;

STUDENT Input(STUDENT var)
{
	printf("enter the roll\n");
	scanf("%d",&var.roll);
	printf("enter the name\n");
	scanf("%s",var.name);
	printf("enter the marks\n");
	scanf("%f",&var.marks);
	return var;

}

void Print(STUDENT var)
{
	printf("%d %s %f\n",var.roll,var.name,var.marks);

}
int main()
{
	STUDENT v;
	v=Input(v);
	Print(v);

}
	
