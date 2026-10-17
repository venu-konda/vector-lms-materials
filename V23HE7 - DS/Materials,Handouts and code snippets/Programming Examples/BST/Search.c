#include"myheader.h"

void Search(struct BST *ptr,int d)
{
	if(ptr==NULL)
	{
		printf("%d is not found\n",d);
	}
	else if(d < ptr->data)
	{
		Search(ptr->left,d);
	}
	else if(d > ptr->data)
	{
		Search(ptr->right,d);
	}
	else
	{
		printf("%d is found\n",d);
		return ;
	}
}
