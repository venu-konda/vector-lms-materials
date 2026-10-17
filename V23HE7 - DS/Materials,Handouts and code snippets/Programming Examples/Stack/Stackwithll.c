#include<stdio.h>
#include<stdlib.h>

struct Stack
{
	int data;
	struct Stack *link;
};
struct Stack *top;
void Push(int);
int Pop();
int Peek();

int main()
{
	int val,choice;
	while(1)
	{
	  printf("1.Push 2.Pop 3.Peek 4.exit\n");
	  printf("enter ur choice\n");
	  scanf("%d",&choice);
	  switch(choice)
	  {
		  case 1: printf("enter the data to be pushed\n");
			  scanf("%d",&val);
			  Push(val);
			  break;
		case 2: if(top==NULL)
				printf("Stack is empty\n");
			else
		{printf("data poped is %d\n",Pop());
		}
			break;
	
		case 3: if(top==NULL)
				printf("Stack is empty\n");
			else
		{printf("data pointed by the top of the stack is  %d\n",Peek());
		}
			break;
		case 4: exit(0);
	  }
	}
}

void Push(int d)
{
	struct Stack * newnode=NULL;
	newnode=calloc(1,sizeof(struct Stack));
	if(newnode==NULL)
	{
		printf("Stack is full\n");
	}
	else
	{
		newnode->data=d;
		newnode->link=top;
		top=newnode;
	}
}

int Pop()
{
	struct Stack *temp=NULL;
	int val;
	temp=top;
	top=top->link;
	val=temp->data;
	free(temp);
	return val;
}
int Peek()
{
	return top->data;
}


