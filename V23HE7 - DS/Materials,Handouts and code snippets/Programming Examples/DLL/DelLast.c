#include"myheader.h"

EMP * DelLast(EMP *ptr)
{
	EMP *temp=NULL;
	if(ptr==NULL)// list is empty
	{
		printf("List is empty\n");
	}
	else if(ptr->link==NULL) // list having only one node
	{
		free(ptr);
		ptr=NULL;
	}
	else// having more than one node
	{// for(temp=ptr;temp->link;temp=temp->link);

		temp=ptr;
		while(temp->link)
		{
			temp=temp->link;
		}

		temp->prev->link=NULL; // making last before node as last node
		free(temp);
	}
return ptr;
}
