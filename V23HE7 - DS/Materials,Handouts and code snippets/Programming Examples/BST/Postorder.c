#include"myheader.h"

void Postorder(struct BST *ptr)
{
	if(ptr)
	{
		Postorder(ptr->left);
		Postorder(ptr->right);
		printf("%d ",ptr->data);
	}
}
