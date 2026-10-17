#include"myheader.h"

void Print(STUDENT *ptr)
{STUDENT *temp=ptr;

	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
           do
	   {
		   printf("%d %s\n",temp->roll,temp->name);
		   temp=temp->link;
	   }while(temp!=ptr);




	}
}
