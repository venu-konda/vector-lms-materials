#include"myheader.h"

STUDENT * Add(STUDENT *head)
{
	STUDENT *newnode=NULL;
	/** creation of node ***/
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{
		printf("enter the roll\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		// newnode->link=NULL; // must if memory allocated by malloc
		/** linking to list ****/
		newnode->link=head;
		head=newnode;
	}
	return head;
}
