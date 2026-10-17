#include"myheader.h"

STUDENT * AddLast(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL;
	/** creation of node ***/
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
	{
		printf("Node Not created\n");
		return head;
	}
	/** initialise the node **/
	printf("enter the id\n");
	scanf("%d",&newnode->id);
	printf("enter the name\n");
	scanf("%s",newnode->name);
	printf("enter the marks\n");
	scanf("%f",&newnode->marks);


	/*** link to list **/
	if(head==NULL)// list is empty
	{
		head=newnode; // newly created node added as first node
	}
	else // list already existing
	{
		temp=head;
		while(temp->link)// traversing upto lastnode
		{
			temp=temp->link; // jumping to next node
		}
		temp->link=newnode;// newly created node added as last node
	}
	return head;

}

