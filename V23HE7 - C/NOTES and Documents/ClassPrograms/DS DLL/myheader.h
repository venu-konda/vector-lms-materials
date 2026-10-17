#include<stdio.h>
#include<stdlib.h>

typedef struct Employee
{
	int empid;
	char name[20];
	struct Employee *link,*prev;
}EMP;


	EMP * Del(EMP *);
	EMP * Addlast(EMP *);
EMP * AddFirst(EMP *);
	void Rprint(EMP *);
	
void Display(EMP *);
EMP * DelFirst(EMP*);
EMP * DelLast(EMP*);
EMP * Reverse(EMP*);

