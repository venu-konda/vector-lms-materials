#include"myheader.h"

EMP * DelLast(EMP *ptr)
{
	EMP *temp=NULL;

	if(ptr==NULL){
		printf("List is Empty");

	}
	else if(ptr ->link==NULL){

		free(ptr);
		ptr=NULL;
		return ptr;
	}
	else
	{

		temp=ptr;
		while(temp->link!=NULL){

			temp=temp->link;
		}
		(temp->prev)->link=NULL;
		free(temp);
	}
	return ptr;
}

