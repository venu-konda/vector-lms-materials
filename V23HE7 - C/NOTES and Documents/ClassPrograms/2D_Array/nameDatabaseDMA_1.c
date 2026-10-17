#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<stdio_ext.h>

int cnt=0;

void printMenu(void)
{
	printf("\nMENU\n");
	printf("--------\n");
	printf("i:input\np:print\nq:quit\n");
	printf("f:find\ns:sort\nd:delete\nS:save records\n");
	printf("ENter your choice:");
}
void *input(char (*ptr)[20])
{//whenever called, add a new name to the existing records.
   //each name can be of maximum 19 chars, with a extra \0, total 20.
	ptr=realloc(ptr,(cnt+1)*sizeof(*ptr));	
	printf("Enter name(19 chars max):");
__fpurge(stdin);
	fgets(ptr[cnt],20,stdin);
	cnt++;
	return ptr;
}
void print(char (*ptr)[20])
{
	int i;
	for(i=0;i<cnt;i++)
		printf("name-%d:%s",i,ptr[i]);
}

void *delete(char (*p)[20])
{
///user-specified  record to be deleted
   int i;
   if(cnt==0){printf("no records\n");return NULL;}

   printf("enter index to delete:");
   scanf("%d",&i);
   memmove(p+i,p+i+1,(cnt-1-i)*sizeof(*p));
   p=realloc(p,--cnt * sizeof(*p));

   if(cnt==0)   p=NULL;

  return p;

}
void sort(char (*p)[20])
{
	int i,j;
	char temp[20];
	for(i=cnt-1;i>0;i--)
		for(j=0;j<i;j++)
			if(strcmp(p[j],p[j+1])>0)
			{
			strcpy(temp,p[j]);
			strcpy(p[j],p[j+1]);
			strcpy(p[j+1],temp);
			}

return;
}

int main()
{
	char (*names)[20]=NULL;
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
