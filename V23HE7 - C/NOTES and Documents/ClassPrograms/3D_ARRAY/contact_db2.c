#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>
int cnt;
char * getString()
{
	char *q=NULL;
	int i=0;
	__fpurge(stdin);
	do
	{
		q=realloc(q,i+1);
		q[i]=getchar();
	}while(q[i++]!='\n');
	q[i-1]='\0';
	return q;
}
char *** insert(char ***CDB)
{
	CDB=realloc(CDB,(cnt+1)*sizeof(char **));
	CDB[cnt]=calloc(3,sizeof(char *));
	printf("enter the name\n");
	CDB[cnt][0]=getString();
	printf("enter the mailid\n");
	CDB[cnt][1]=getString();
	printf("enter the contact\n");
	CDB[cnt][2]=getString();
	cnt++;
	return CDB;
}
void print(char ***CDB)
{
	int i;
	for(i=0;i<cnt;i++)
	{
		printf("name %s\n",CDB[i][0]);
		printf("mailid %s\n",CDB[i][1]);
		printf("contactno %s\n\n",CDB[i][2]);
	}
}
char *** del(char ***CDB)
{
	char str[20];
	int i,j;
	printf("enter the name to be deleted\n");
	scanf("%s",str);
	for(i=0;i<cnt;i++)
	{
		if(!strcmp(str,CDB[i][0]))
		{
			for(j=0;j<3;j++)
			{
				free(CDB[i][j]);
			}
			free(CDB[i]);

	memmove(CDB+i,CDB+i+1,(cnt-i-1)*sizeof(*CDB));
	cnt--;
	CDB=realloc(CDB,cnt*sizeof(*CDB));
	return CDB;
	}
	}
	printf("%s is not found\n",str);
	return CDB;

}

char *** sort(char ***CDB)
{
	char **temp=NULL;
	int i,j;
	for(i=0;i<cnt-1;i++)
	{
		for(j=i+1;j<cnt;j++)
		{
			if(strcmp(CDB[i][0],CDB[j][0])>0)
			{
				temp=CDB[i];
				CDB[i]=CDB[j];
				CDB[j]=temp;
			}
		}

	}
return CDB;

}

int main()
{
	char ***CDB=NULL;
	char choice;
	while(1)
	{
		printf("i.insert p.print d.del f.find s.sort e.exit\n");
		printf("enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
		case 'i': CDB=insert(CDB);
			  break;
		case 'p' : print(CDB);
			   break;
		case 'e' : exit(0);
		case 'd' : CDB=del(CDB);
			   break;
		case 's' : CDB=sort(CDB);

		}
	}
}

