#include"myheader.h"

STUDENT * Del(STUDENT *head)
{
	STUDENT *temp;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else if(head->link==NULL) // list having only one node
	{
		free(head);
		head=NULL;
	}
	else
	{
		temp=head;
		while(temp->link->link)
		{
			temp=temp->link;
		}
		free(temp->link);
		temp->link=NULL;
	}
	return head;

}

