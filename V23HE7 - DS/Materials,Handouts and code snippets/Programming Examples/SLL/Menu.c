#include"myheader.h"

int main()
{
	STUDENT *head=NULL;

	char choice;
	while(1)
	{
		printf("a.add p.print d.del e.exit\n");
		printf("enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'a' : head=Add(head);
				   break;
			case 'p' : Print(head);
				   break;
			case 'e' : exit(0);
			case 'd' : head=Del(head);
		}
	}
}
