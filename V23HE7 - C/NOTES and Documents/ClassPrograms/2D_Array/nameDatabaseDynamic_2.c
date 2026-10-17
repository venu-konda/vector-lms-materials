#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

int cnt=0;

char *getString()
{
	int i=0;
	char *p=NULL;
	do{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]=0;
	return p;
}
void printMenu(void)
{
	printf("\nMENU\n");
	printf("--------\n");
	printf("i:input\np:print\nq:quit\n");
	printf("f:find\ns:sort\nd:delete\nS:save records\n");
	printf("ENter your choice:");
}
void *input(char **ptr)
{//whenever called, add a new name to the existing records.
//the length of name has no limit, Can input length of any size.
	ptr=realloc(ptr,(cnt+1)*sizeof(*ptr));	
	printf("Enter name(length of any size):");
__fpurge(stdin);
	ptr[cnt]=getString();
	cnt++;
	return ptr;
}
void print(char **ptr)
{
	int i;
	for(i=0;i<cnt;i++)
		printf("name-%d:%s\n",i,ptr[i]);
}

void *delete(char **p)
{
///user-specified  record to be deleted
   int i;
   if(cnt==0){printf("no records\n");return NULL;}

   printf("enter index to delete:");
   scanf("%d",&i);
   free(p[i]);
   memmove(p+i,p+i+1,(cnt-1-i)*sizeof(*p));
   p=realloc(p,--cnt * sizeof(*p));

   if(cnt==0)   p=NULL;

  return p;

}
void sort(char **p)
{
	int i,j;
	char *temp;
	for(i=cnt-1;i>0;i--)
		for(j=0;j<i;j++)
			if(strcmp(p[j],p[j+1])>0)
			{
			temp=p[j];
			p[j]=p[j+1];
			p[j+1]=temp;
			}

return;
}

int main()
{
	char **names=NULL;
	char choice;
	while(1)
	{
		printMenu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i':names=input(names); break;
			case 'd':names=delete(names);break;
			case 's':sort(names);break;
			case 'q':return 0;
			case 'p':print(names);break;
			default: printf("Error:invalid entry\n");
		}//switch
	}
}
