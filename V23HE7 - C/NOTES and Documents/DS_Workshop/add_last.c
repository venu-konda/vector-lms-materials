#include"myheaders.h"
char *getstring()
{
	char *p=NULL;
	int i=0;
	do{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!=10);

	p[i-1]=0;
	return p;

}


struct stu *add_last(struct stu *p)
{
	struct stu *new,*temp;
	new=calloc(1,sizeof(struct stu));

	puts("Enter new node info");
	scanf("%d",&new->roll);
	__fpurge(stdin);
	new->name=getstring();
	scanf("%f",&new->per);
	new->next=NULL;
	
	if(p==NULL)
	{

		p=new;
		
	}
	else
	{
		temp=p;
		while(temp->next != NULL)
			temp=temp->next;

		temp->next=new;

	}
	return p;
	
}
