#include"myheader.h"

EMP * DelFirst(EMP * ptr)
{
	EMP *temp=NULL;
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else if(ptr->link==NULL) // list having only one node
	{
		free(ptr);
		ptr=NULL;
	}
	else // list having more than one node
	{
		temp=ptr; // assigning current first node to temp;
		ptr=ptr->link; // moving ptr to next node
		ptr->prev=NULL; // making second node as first node
		free(temp);
	
	}
	return ptr;
}
