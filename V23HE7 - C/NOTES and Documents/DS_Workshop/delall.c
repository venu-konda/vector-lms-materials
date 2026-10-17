#include"myheaders.h"
struct stu *delall(struct stu *head)
{
	struct stu *temp=NULL;
	if(head==NULL)
	{
		puts("no nodes to delete");
		return NULL;
	}
	while(head)
	{
		temp=head;
		free(temp->name);		//free the memory allocated by getstring function
		free(temp);			//free the node and make temp as NULL
		temp=NULL;
		head=head->next;
	}
	return head;



}

