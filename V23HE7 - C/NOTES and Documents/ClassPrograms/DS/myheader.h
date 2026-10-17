
#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>

typedef struct Student
{
	int id;
	char name[20];
	float marks;
	struct Student *link;
}STUDENT;


STUDENT * AddLast(STUDENT *);
void Print(STUDENT *);

