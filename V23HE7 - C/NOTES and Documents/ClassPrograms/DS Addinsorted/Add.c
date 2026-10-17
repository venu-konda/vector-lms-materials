#include"myheader.h"

STUDENT * AddSorted(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL,*prev=NULL;
	/** creation of node **/
	newnode=malloc(sizeof(STUDENT));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{
		/** initialise the node ***/
		printf("enter the id\n");
		scanf("%d",&newnode->id);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		printf("enter the marks\n");
		scanf("%f",&newnode->marks);
		newnode->link=NULL;
		if(head==NULL || newnode->id < head->id)
		{
			newnode->link=head;
			head=newnode;
		}
		else
		{
			prev=head;
			temp=head->link;
			while(temp && newnode->id > temp->id)
			{
				prev=temp;
				temp=temp->link;
			}
			prev->link=newnode;
			newnode->link=temp;
		}
	}
	return head;
}












