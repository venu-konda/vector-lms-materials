#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define MAX 100
void heapify(int *,int ,int);
void heapsort(int * ,int);

void Input(int *);
void Display(int *);

int main()
{
	int a[MAX];
	Input(a);
	Display(a);
	heapsort(a,MAX);
	Display(a);
}

void heapsort(int *p,int size)
{
	int i,temp;
	for(i=size/2-1;i>=0;i--)
	{
		heapify(p,i,size);
	}

	for(i=size-1;i>0;i--)
	{
		temp=p[0];
		p[0]=p[i];
		p[i]=temp;
		heapify(p,0,i);
	}
}

void heapify(int *p,int parent,int size)
{
	int large=parent,li,ri,temp;
	li=2*parent+1;
	ri=2*parent+2;
	if(li<size && p[li]>p[parent])
		large=li;
	if(ri<size && p[ri] > p[large])
		large=ri;
	if(large !=parent)
	{
		temp=p[large];
		p[large]=p[parent];
		p[parent]=temp;
		heapify(p,large,size);
	}
}

void Input(int *p)
{
	int i;
	srand(getpid());
	for(i=0;i<MAX;i++)
		p[i]=rand()%1000;
}
void Display(int *p)
{
	int i;
	for(i=0;i<MAX;i++)
		printf("%d ",p[i]);
	printf("\n");
}


