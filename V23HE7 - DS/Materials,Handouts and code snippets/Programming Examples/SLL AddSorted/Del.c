#include"myheader.h"

STUDENT * Del(STUDENT *head)
{
	STUDENT *temp=NULL,*prev=NULL;
	int data;
	printf("enter the data to be deleted\n");
	scanf("%d",&data);
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else if(data==head->roll)// matching with first node data
	{
		temp=head;
		head=head->link;
		free(temp);
	}
	else
	{temp=head;
		while(temp && data!=temp->roll)
		{
			prev=temp;
			temp=temp->link;
		}
		if(temp==NULL)// reached end of the list
		{
			printf("%d is not found\n",data);
		}
		else
		{
			prev->link=temp->link; //linking previous node and next node of temp
			free(temp);
		}
	
	}
	return head;
}
