#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX 100
void Input(int *);
void Display(int *);

void Selection(int *);

int main()
{
	int arr[MAX];
	Input(arr);
	printf("elements\n");
	Display(arr);
	Selection(arr);
	printf("Elements after Sorting\n");
	Display(arr);
}

void Input(int *p)
{
	int i;
	printf("%d\n",getpid());
	srand(getpid());
	for(i=0;i<MAX;i++)
	{
		p[i]=rand()%5000;
	}
}

void Display(int *p)
{
	int i;
	for(i=0;i<MAX;i++)
		printf("%d ",p[i]);
	printf("\n");
}

void Selection(int *p)
{
	int i,j,temp;
	for(i=0;i<MAX-1;i++)
	{
		for(j=i+1;j<MAX;j++)
		{
			if(p[i]>p[j])
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
}
