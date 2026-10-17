#include"myheader.h"

struct BST *Insert(struct BST *ptr,int d)
{
	if(ptr==NULL) // having vacancy
	{
		ptr=calloc(1,sizeof(struct BST));
		if(ptr==NULL)
		{
			printf("Node not created\n");
		}
		else
		{
			ptr->data=d;
		}
	}
	else if(d < ptr->data) // if d is smaller than current node data travere to left subtree 
	{
		ptr->left=Insert(ptr->left,d);
	}
	else if(d > ptr->data) // if d is greater than current node data traverse to right subtree
	{
		ptr->right=Insert(ptr->right,d);
	}
	else
	{
		printf("%d is already existing\n",d);
	}
	return ptr;
}
