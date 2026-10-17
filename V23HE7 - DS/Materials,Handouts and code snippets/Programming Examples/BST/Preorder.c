#include"myheader.h"

void Preorder(struct BST *ptr)
{
	if(ptr)
	{
		printf("%d ",ptr->data);
		Preorder(ptr->left);
		Preorder(ptr->right);
	}
}
