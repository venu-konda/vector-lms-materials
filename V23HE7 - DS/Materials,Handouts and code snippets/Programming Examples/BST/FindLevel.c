#include"myheader.h"
extern int level;
void FindLevel(struct BST *ptr,int d)
{	level++;
	if(ptr==NULL)
	{
		printf("%d is not found\n",d);
		level=0;

	}
	else if(d < ptr->data)
	{
		FindLevel(ptr->left,d);
	}
	else if(d > ptr->data)
	{
		FindLevel(ptr->right,d);
	}
	else
	{
		printf("level of %d is %d\n",d,level-1);
		
	}
}
