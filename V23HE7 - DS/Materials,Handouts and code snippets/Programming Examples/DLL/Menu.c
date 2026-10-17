#include"myheader.h"

int main()
{
	EMP *head=NULL;
	int choice;
	while(1)
	{
		printf("1.AddFirst 2.Display 3.DelFirst 4.exit 5.DelLast 6.Reverse\n");
		printf("enter the choice\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1: head=AddFirst(head);
				break;
			case 2: Display(head);
				break;
			case 3: head=DelFirst(head);
				break;
			case 4: exit(0);
			case 5: head=DelLast(head);
				break;
			case 6: head=Reverse(head);
				break;
		}
	}
}
