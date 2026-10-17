#include<stdio.h>
#include<stdlib.h>

typedef struct Student
{
	int roll;
	char name[20];
	struct Student *link;
}STUDENT;

STUDENT * Add(STUDENT *);
STUDENT * Del(STUDENT *);
void Print(STUDENT *);

