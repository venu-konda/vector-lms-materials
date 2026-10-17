#include<stdio.h>
#include<stdlib.h>

struct Queue
{
	int data;
	struct Queue *link;
};
struct Queue *rear,*front;

void Enq(int);
int Deq();
int main()
{
	int val;
	int choice;
	while(1)
	{
		printf("1.Enq 2. Deq 3.exit\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data\n");
				scanf("%d",&val);
				Enq(val);
				break;
			case 2: if(front==NULL)
				{
				printf("Queue is empty\n");
				}
				else
				{
			printf("data dequed is %d\n",Deq());
				}
				break;
			case 3: exit(0);
		}
	}
}

void Enq(int d)
{
	struct Queue *newnode=NULL;
	/**** creation of node ******/
	newnode=calloc(1,sizeof(struct Queue));
	if(newnode==NULL)
	{
		printf("node not created\n");
	}
	else
	{
		newnode->data=d;
		if(front==NULL) // queue is empty
			front=newnode;
		else
			rear->link=newnode;
		rear=newnode;
	}
}

int Deq()
{	int d;
	struct Queue *temp=NULL;
	temp=front;
	front=front->link;
	if(front==NULL)
		rear=NULL;
	d=temp->data;

	free(temp);
	temp=NULL;
return d;
}

