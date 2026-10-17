#include"myheader.h"

STUDENT * Add(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL;
	/** creation of node **/
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
	{
		printf("Node not created\n");

	}
	else
	{
		printf("enter the id\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
		scanf("%s",newnode->name);

		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
	for(temp=head;temp->link!=head;temp=temp->link);
	temp->link=newnode;
		}
		newnode->link=head; //last node link is updated with first node address
	}
	return head;
}
	
