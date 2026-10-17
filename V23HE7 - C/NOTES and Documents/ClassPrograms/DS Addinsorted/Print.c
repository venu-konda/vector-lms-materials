#include"myheader.h"

void Print(STUDENT *ptr)
{
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(ptr)
		{
			printf("%d %s %f\n",ptr->id,ptr->name,ptr->marks);
			ptr=ptr->link;


		}
	}
}
