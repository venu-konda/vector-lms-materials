#include<stdio.h>

typedef struct Student
{
	int roll;
	char name[20];
	float marks;
}STUDENT;
void Input(STUDENT *,int );
void Print(STUDENT *,int);
int main()
{
	STUDENT Arr[5]; // array of 5 STUDENT Variables
	Input(Arr,5);
	Print(Arr,5);
}

void Input(STUDENT *p,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("enter the roll\n");
		scanf("%d",&p[i].roll);
		// scanf("%d",&((p+i)->roll));
		printf("enter the name\n");
		scanf("%s",p[i].name);
		//scanf("%s",(p+i)->name);
		printf("enter the marks\n");
		scanf("%f",&p[i].marks);
	}
}

void Print(STUDENT *p,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
   printf("%d %s %f\n",p[i].roll,p[i].name,p[i].marks);
   // printf("%d %s %f\n",(p+i)->roll,(p+i)->name,(p+i)->marks);
   }
}

