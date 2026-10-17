#include"myheaders.h"


int main()
{
	struct stu *p=NULL;
	int choice;
	while(1)
	{
		printMenu();
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:p=add_last(p);
			       break;
			case 2:print_nodes(p);
			       break;
			case 3:p=delall(p);                //function to delete all nodes 
				break;
			case 4:print_mid_nodes(p);           //function to print in mid node
				break;
			case 5:exit(0);
			default:puts("invalid choice");
		}
		

	}


	

}





