#include"myheader.h"

void Rprint(EMP *ptr)
{
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		for(;ptr->link;ptr=ptr->link);

		while(ptr)
		{
			printf("%d %s\n",ptr->empid,ptr->name);
			ptr=ptr->prev;
		}
	}
}
