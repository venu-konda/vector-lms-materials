#include"myheader.h"

struct BST * FindMin(struct BST *ptr)
{
if(ptr->left)
	return FindMin(ptr->left);
return ptr;





}
