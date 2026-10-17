#include"myheader.h"

STUDENT * AddFirst(STUDENT *head)
{	STUDENT *newnode=NULL;
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{
		printf("enter the id\n");
		scanf("%d",&newnode->id);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		printf("enter the marks\n");
		scanf("%f",&newnode->marks);

		newnode->link=head;
		head=newnode;
	}
	return head;
}

