#include<stdio.h>
int main()
{	FILE *fp;
	char ch;
	fp=fopen("data","r");
	printf("%ld\n",sizeof(FILE));
	if(fp==NULL)
	{
		printf("file not found\n");
	}
	else
	{
		printf("file opened successfully\n");
		ch=fgetc(fp);
		printf("%c \n",ch);
		ch=fgetc(fp);
		printf("%c \n",ch);
		ch=fgetc(fp);
		printf("%c \n",ch);
		ch=fgetc(fp);
		printf("%c \n",ch);
		ch=fgetc(fp);
		printf("%c \n",ch);
		ch=fgetc(fp);
		printf("%c \n",ch);

	
	}

}
