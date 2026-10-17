#include"myheader.h"

int main()
{
	EMP *head=NULL;
	int choice;
	while(1)
	{
		printf("1.Addlast 2.Display 3.Rprint 4.exit 5.Del 6.DelFirst \n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=Addlast(head);
				break;
			case 2: Display(head);
				break;
			case 3: Rprint(head);
				break;
			case 5: head=Del(head);
				break;
			case 4: exit(0);
			case 6: head=DelFirst(head);
				break;/*
			case 7: head=Reverse(head);
				break;*/
		}
	}
}
