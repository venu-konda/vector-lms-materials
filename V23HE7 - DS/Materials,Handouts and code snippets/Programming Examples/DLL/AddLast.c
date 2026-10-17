#include"myheader.h"

EMP * Addlast(EMP *ptr)
{
	EMP *temp=NULL,*newnode=NULL;
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

		if(ptr==NULL)// ifd list is empty
		{
			ptr=newnode; // asign newnode to head
		}
		else
		{
		for(temp=ptr;temp->link;temp=temp->link);
		temp->link=newnode; // forward linking
		newnode->prev=temp;// backward linking
		}
	}
	return ptr;
}
