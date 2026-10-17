#include"myheader.h"

EMP * Reverse(EMP *ptr)
{
	EMP * temp=NULL, *p=NULL;
	if(ptr==NULL)
	{
		printf("List isempty\n");
	}
	else if(ptr->link==NULL)
	{
		printf("List having only one node\n");
	}
	else
	{
		p=ptr;
		while(p)
		{
			temp=p->prev;
			p->prev=p->link;
			p->link=temp;
			p=p->prev;
		}
		ptr=temp->prev;
	}
	return ptr;
}
