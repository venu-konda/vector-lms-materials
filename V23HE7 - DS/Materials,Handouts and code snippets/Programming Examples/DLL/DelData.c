#include"myheader.h"

EMP * Del(EMP *ptr)
{
	EMP *temp=NULL;
	int data;
	printf("enter the data to be deleted\n");
	scanf("%d",&data);
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	/** data matching with first node ***/
	else if(ptr->empid==data)
	{
		ptr=DelFirst(ptr);
	}
	else
	{
		temp=ptr;
		while(temp && temp->empid!=data)
		{
			temp=temp->link;
		}
		if(temp==NULL)
		{
		printf("%d is not found\n",data);
		}
		else
		{
		temp->prev->link=temp->link;
		if(temp->link)
		temp->link->prev=temp->prev;
		free(temp);
		}
	}
	return ptr;
}


