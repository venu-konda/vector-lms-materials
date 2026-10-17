#include"myheader.h"

EMP * AddFirst(EMP *ptr)
{
	EMP *newnode=NULL;
	/** creation of node **/
	newnode=calloc(1,sizeof(EMP));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{
		printf("enter the empid\n");
		scanf("%d",&newnode->empid);
		printf("enter the name\n");
		scanf("%s",newnode->name);

		newnode->link=ptr; // forward linking
		if(ptr)
		{
			ptr->prev=newnode; // backward linking
		}
		ptr=newnode;
	}
	return ptr;
}
