#include"myheader.h"
int level;
int main()
{
	struct BST *root=NULL,*temp=NULL;
	int data;
	int choice;
	while(1)
	{
		printf("1. Insert 2.Preorder 3.Postorder 4.Inorder 5.Search 6.Del 7.exit 8. Findmib\n");
		printf("Enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: printf("enter the data to be inserted\n");
				scanf("%d",&data);
				root=Insert(root,data);
				break;
			case 2: Preorder(root);
				break;
			case 3: Postorder(root);
				break;
			case 4: Inorder(root);
				break;
			case 5: printf("enter the data\n");
				scanf("%d",&data);
				Search(root,data);
				break;
			case 6: printf("enter the data to be del\n");
				scanf("%d",&data);
				if(root==NULL)
					printf("BST is empty\n");
				else
					root=Del(root,data);
				break;
			case 7: exit(0);
			case 8: if(root==NULL)
					printf("BST is empty\n");
				else
				{
				temp=FindMin(root);
				printf("%d is node with min val\n",temp->data);
				}
				break;
			case 9 :printf("enter the data whose level to be find\n");
			       scanf("%d",&data);	
				FindLevel(root,data);
				level=0;
		}
	}
}
