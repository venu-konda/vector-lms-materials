#include"myheadr.h"


struct Student * Del(struct Student *ptr)
{
	struct Student *prev=NULL,*temp=NULL;
	int data;
	printf("enter the data\n");
	scanf("%d",&data);
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else if(data==ptr->roll)// matching with first node
	{
		temp=ptr;
		ptr=ptr->link;
		if(ptr==temp)  // list is having only one node
		{
			ptr=NULL;// making list empty
		}
		else
		{
			prev=temp;
			while(prev->link!=temp)
			{
				prev=prev->link;
			}
			prev->link=ptr;// changing last node link to new first node		   
		}
		free(temp);
		temp=NULL;
	}
	else
	{
		prev=ptr;  // first node
		temp=ptr->link; // pointing to second node
		while(temp!=ptr && data !=temp->roll)
		{
			prev=temp;
			temp=temp->link;
		}
		if(temp==ptr)
		{
			printf("%d is not found\n",data);
		}
		else
		{
			prev->link=temp->link;
			free(temp);
			temp=NULL;
		}
	}
return ptr;
}
