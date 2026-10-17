#include<stdio.h>
#include<stdlib.h>

#define MAX 5
int Q[MAX];
int rear=-1;
int front=-1;
void Enq(int);
int Deq();
int main()
{
	int data,choice;
	while(1)
	{
		printf("1. Enq 	2.Deq	3.Exit\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data to enqed\n");
				scanf("%d",&data);
				Enq(data);
				break;
			case 2:if(front==-1)
				       printf("Queue is empty\n");
			       else
				       printf("data dequed is %d\n",Deq());
			       break;
			case 3: exit(0);
		}
	}
}

void Enq(int d)
{
	if(front==rear+1)
		printf("Queueu is full\n");
	else
	{
		if(front==-1)  // if queue is empty
			front++; // so that front points to first ele
		Q[++rear]=d;
		if(rear==MAX-1)
			rear=-1; // resetting to initial values
	}
}


int Deq()
{	int i;
	int temp;
	temp=Q[front++];
	if((front==MAX) && (rear>-1))
		front=0;
	else if((front==MAX) || (front==rear+1))
		front=rear=-1;
	return temp;
}
