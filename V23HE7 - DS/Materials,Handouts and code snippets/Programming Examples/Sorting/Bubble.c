#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX 1000
void Input(int *);
void Display(int *);

void Bubble(int *);

int main()
{
	int arr[MAX];
	Input(arr);
	printf("elements\n");
	Display(arr);
	Bubble(arr);
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

void Bubble(int *p)
{
	int i,j,temp;
	for(i=1;i<MAX;i++)
	{
		for(j=0;j<MAX-i;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}
