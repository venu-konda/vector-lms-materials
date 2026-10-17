#include<stdio.h>
//#define MAX  10
int cnt=0;
const int MAX=10;
void printMenu(void)
{
	printf("\nMENU\n");
	printf("--------\n");
	printf("i:input\np:print\nq:quit\n");
	printf("f:find\ns:sort\nd:delete\n");
	printf("ENter your choice:");
}
void input(char (*ptr)[20])
{//whenever called, add a new name to the existing records.
	if(cnt == MAX){printf("not enough memory\n"); return;}	
	printf("Enter name:");
__fpurge(stdin);
	gets(ptr[cnt]);
	cnt++;
}
void print(char (*ptr)[20])
{
	int i;
	for(i=0;i<cnt;i++)
		printf("name-%d:%s\n",i,ptr[i]);
}

int main()
{
	char names[10][20];
	char choice;
	while(1)
	{
		printMenu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i':input(names); break;
			case 'd'://delete();break;
			case 'q':return 0;
			case 'p':print(names);break;
			default: printf("Error:invalid entry\n");
		}//switch
	}
}
