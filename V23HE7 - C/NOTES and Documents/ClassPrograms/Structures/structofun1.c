#include<stdio.h>
typedef struct Student
{
	int roll;
	char name[20];
	float marks;
}STUDENT;

void Input(STUDENT *p)
{
	printf("enter the roll\n");
	scanf("%d",&p->roll); // &(*p).roll
	printf("enter the name\n");
	scanf("%s",p->name); // (*p).name
	printf("enter the marks\n");
	scanf("%f",&p->marks);
	

}

void Print(STUDENT var)
{
	printf("%d %s %f\n",var.roll,var.name,var.marks);

}
int main()
{
	STUDENT v;
	Input(&v);
	Print(v);

}
	
