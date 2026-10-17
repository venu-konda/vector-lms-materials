#include"myheader.h"

STUDENT * DelFirst(STUDENT *head)
{
	STUDENT *temp;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp=head;
		head=head->link;
		free(temp);
	}
	return head;
}
