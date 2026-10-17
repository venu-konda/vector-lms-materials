#include"myheader.h"

STUDENT * Add(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL,*prev=NULL;
	/** creation of node **/
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

		if((head==NULL) || (newnode->roll < head->roll))
		{
			newnode->link=head;
			head=newnode;
		}
		else
		{
			temp=head;
			while(temp && newnode->roll > temp->roll)
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
