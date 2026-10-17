#include"myheadr.h"

void Display(struct Student *ptr)
{
	struct Student *temp=NULL;
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp=ptr;
		do
		{
			printf("%d %s\n",temp->roll,temp->name);
			temp=temp->link;
		}while(temp!=ptr);
	}
}
