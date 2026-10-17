#include"myheader.h"

STUDENT * Rev(STUDENT *head)
{
	STUDENT *pptr=NULL,*cptr=NULL,*nptr=NULL;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else if(head->link==NULL) // list having only one node
	{
		printf("List having only one node\n");
	}
	else
	{
		nptr=head;
		while(nptr)
		{
			pptr=cptr;
			cptr=nptr;
			nptr=nptr->link;
			cptr->link=pptr; // updating current node link with its previous node address
		}
		head=cptr;
	}
	return head;
}
