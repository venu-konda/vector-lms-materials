#include<stdio.h>
#include<stdlib.h>

typedef struct Student
{
	int roll;
	char name[20];
	float marks;
}STUDENT ;
void Input(STUDENT *p,int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("enter the roll\n");
		scanf("%d",&p[i].roll);
		printf("enter the name\n");
		scanf("%s",p[i].name);
		printf("enter the marks\n");
		scanf("%f",&p[i].marks);
	}
}

void Print(STUDENT *p,int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d %s %f\n",p[i].roll,p[i].name,p[i].marks);
}


void saveToFile(STUDENT *p,int size)
{
	int i=0;
	FILE *fp;
	fp=fopen("Stu","w");
	for(i=0;i<size;i++)
	{
		fprintf(fp,"%d %s %f ",p[i].roll,p[i].name,p[i].marks);
	}
	fclose(fp);
}
int main()
{
	STUDENT DB[5];
	Input(DB,5);
	Print(DB,5);
	saveToFile(DB,5);

}

