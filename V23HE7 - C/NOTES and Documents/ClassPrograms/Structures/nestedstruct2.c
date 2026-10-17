#include<stdio.h>
struct Student
{
	int roll;
	char name[20];
	float marks;
	struct DOB
	{
		int day;
		int mon;
		int year;
	}dob;
};
struct Employee
{
	int id;
	char name[20];
	struct EDOB
	{
		int day;
		int mon;
		int year;
	}dob;
};

int main()
{
	struct Student V;
	struct Employee E;
	printf("enter the roll\n");
	scanf("%d",&V.roll);
	printf("enter the name\n");
	scanf("%s",V.name);
	printf("enter the marks\n");
	scanf("%f",&V.marks);
	printf("enter the day\n");
	scanf("%d",&V.dob.day);
	printf("enter the month\n");
	scanf("%d",&V.dob.mon);
	printf("enter the year\n");
	scanf("%d",&V.dob.year);
	
	printf("enter the id\n");
	scanf("%d",&E.id);
	printf("enter the name\n");
	scanf("%s",E.name);
	printf("enter the day\n");
	scanf("%d",&E.dob.day);
	printf("enter the month\n");
	scanf("%d",&E.dob.mon);
	printf("enter the year\n");
	scanf("%d",&E.dob.year);

	printf("roll :%d\n",V.roll);
	printf("name: %s\n",V.name);
	printf("marks :%f\n",V.marks);
	printf("DOB : %d-%d-%d\n",V.dob.day,V.dob.mon,V.dob.year);

	printf("id :%d\n",E.id);
	printf("name: %s\n",E.name);
	printf("DOB : %d-%d-%d\n",E.dob.day,E.dob.mon,E.dob.year);

}
