#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<string.h>

#define MAX 5
int cnt;
void insert(char (*)[3][20]);
void print(char (*)[3][20]);
void del(char (*)[3][20]);
void sort(char(*)[3][20]);
int main()
{
	char CDB[MAX][3][20];
	char choice;
	while(1)
	{
		printf("i.insert p.print d.del f.find s.sort e.exit\n");
		printf("enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case'i' : insert(CDB);
				  break;
			case 'p' : print(CDB);
				   break;
			case'd' : del(CDB);
				  break;
			case 's': sort(CDB);
				  break;
			case 'e' : exit(0);
		}
	}
}

void insert(char (*CDB)[3][20])
{
	if(cnt==MAX)
	{
		printf("Contact DB is full\n");
	}
	else
	{
		printf("enter the name\n");
		scanf("%s",CDB[cnt][0]);
		printf("enter the email\n");
		scanf("%s",CDB[cnt][1]);
		printf("enter the contactno\n");
		scanf("%s",CDB[cnt][2]);
		cnt++;
	}
}

void print(char (*CDB)[3][20])
{	int i;
	if(cnt==0)
		printf("DB is empty\n");
	else
	{
		for(i=0;i<cnt;i++)
		{
			printf("name %s \n",CDB[i][0]);
			printf("emailid %s \n",CDB[i][1]);
			printf("contactno %s \n\n",CDB[i][2]);
		}
	}
}

void del(char (*CDB)[3][20])
{	int i;
	char name[20];
	printf("enter the name to be deleted\n");
	scanf("%s",name);
	for(i=0;i<cnt;i++)
	{
		if(strcmp(name,CDB[i][0])==0)
		{
	       memmove(CDB+i,CDB+i+1,(cnt-i-1)*sizeof(*CDB));
	       cnt--;
	       return ;

		}
	}
	printf("%s is not found\n",name);
}


void sort(char (*CDB)[3][20])
{
	char temp[3][20];

	int i,j;
	for(i=0;i<cnt-1;i++)
	{
		for(j=i+1;j<cnt;j++)
		{
			if(strcmp(CDB[i][0],CDB[j][0])>0)
			{
			memmove(temp,CDB[i],sizeof(CDB[i]));
	       	       memmove(CDB[i],CDB[j],sizeof(CDB[i]));
			memmove(CDB[j],temp,sizeof(CDB[j]));
			}
		}
	}
}




