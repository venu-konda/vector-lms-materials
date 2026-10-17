#include"myheader.h"

STUDENT * DelLast(STUDENT *head)
{
	STUDENT *temp=NULL;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else if(head->link==NULL)
	{
		free(head);
		head=NULL;
	}
	else
	{
	for(temp=head;temp->link->link;temp=temp->link);
	/*
	 temp=head;
	 while(temp->link->link)
	 {
	 temp=temp->link;
	 }
	 */
	free(temp->link);
	temp->link=NULL;
	}
	return head;
}

