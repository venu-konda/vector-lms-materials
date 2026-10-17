#include"myheader.h"

void Inorder(struct BST *ptr)
{
	if(ptr)
	{
		Inorder(ptr->left);
		printf("%d ",ptr->data);
		Inorder(ptr->right);
	}
}
