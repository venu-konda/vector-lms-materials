#include<stdio.h>
int main()
{	FILE *fp;
	char ch;
	fp=fopen("data","r");
	if(fp==NULL)
	{
		printf("file not found\n");
	}
	else
	{
		printf("file opened successfully\n");
		ch=fgetc(fp);
		printf("%c \n",ch);
		ch=*(fp->_IO_read_ptr);
		printf("%c \n",ch);
		fp->_IO_read_ptr++;

		ch=*(fp->_IO_read_ptr);
		printf("%c \n",ch);
		


	}

}
