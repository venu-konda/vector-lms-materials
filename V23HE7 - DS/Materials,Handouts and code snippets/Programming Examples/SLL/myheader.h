#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>

typedef struct Student
{
	int roll;
	char name[20];
	struct Student *link;
}STUDENT;

STUDENT * Add(STUDENT *);
void Print(STUDENT *);
STUDENT * Del(STUDENT *);

