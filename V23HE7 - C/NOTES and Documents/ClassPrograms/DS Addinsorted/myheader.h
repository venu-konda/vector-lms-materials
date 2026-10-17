
#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>
typedef struct Student
{
	int id;
	char name[20];
	float marks;
	struct Student *link;
}STUDENT;

STUDENT * AddSorted(STUDENT *);
STUDENT * DelLast(STUDENT *);
void Print(STUDENT *);



