#include"myheaders.h"
void print_mid_nodes(struct stu *head)
{
	struct stu *fp=NULL,*sp=NULL,*e=NULL;
	if(head==NULL)
	{
		puts("no nodes are there");
		exit(0);
	}
	fp=sp=e=head;    //fast pointer and slow pointers are at the head
	
	while((fp!=NULL)&&(fp->next!=NULL))
	{
		e=sp;
		sp=sp->next;
		fp=fp->next->next;
	}
	if(fp==NULL)
	{								//print if even number of nodes availble
		printf("%d\t%s\t%f\n",e->roll,e->name,e->per);
		printf("%d\t%s\t%f\n",sp->roll,sp->name,sp->per);
	}
	else								//print for odd number of nodes availble
	{
		printf("%d\t%s\t%f\n",sp->roll,sp->name,sp->per);
	}
			

}
