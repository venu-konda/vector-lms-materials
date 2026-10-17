
#include"myheaders.h"
void print_nodes(struct stu *p)
{
	if(p==NULL)
	{
		puts("list is empty");
	}
	while(p)
	{
		printf("%d\t%s\t%f\n",p->roll,p->name,p->per);
		p=p->next;
	}
}


void printMenu()
{
	printf("\n1.Add_first\t2.Print_nodes\t3.Del\t4.midnode\t5.exit\n");
	printf("Enter choice:\n");
}
