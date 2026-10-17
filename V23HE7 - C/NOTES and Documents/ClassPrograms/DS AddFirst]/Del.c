#include"myheader.h"
STUDENT *DelData(STUDENT *head)
{
	int data;
	STUDENT *temp=NULL,*prev=NULL;
	printf("enter the data to be deleted\n");
	scanf("%d",&data);
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else if(data==head->id)
	{
		head=DelFirst(head);
	}
	else
	{
		prev=head;
		temp=head->link;
		while(temp && data!=temp->id)
		{
			prev=temp;
			temp=temp->link;
		}
		if(temp==NULL)
		{
			printf("%d is not found\n",data);
		}
		else
		{
			prev->link=temp->link;
			free(temp);
		}
	}
	return head;
}










