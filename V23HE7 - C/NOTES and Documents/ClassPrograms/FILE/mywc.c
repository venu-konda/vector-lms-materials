#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * readFromFile(char *filename)
{
	FILE *fp;
	char *p=NULL;
	long size=0;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s is not found\n",filename);
		exit(0);
	}
	fseek(fp,0,2);// taking control to end of the file
	size=ftell(fp);
	rewind(fp);
	p=calloc(1,size+1);
	fread(p,size,1,fp);
	p[size]='\0';
	fclose(fp);
	return  p;
}

long searchAllOccOfChar(char *p,char ch)
{
	char *q;
	long cnt=0;
	q=p;
	while(q=strchr(q,ch))
	{
		cnt++;
		q++;
	}
	return cnt;
}



int main(int argc,char *argv[])
{	long ccnt=0,lcnt=0,wcnt=0;
	char *buf=NULL;
	if(argc!=2)
	{
		printf("incorrect Inputs\n");
		exit(0);

	}
	buf=readFromFile(argv[1]);
	ccnt=strlen(buf);
	lcnt=searchAllOccOfChar(buf,'\n');
	wcnt=searchAllOccOfChar(buf,32);
	printf("%ld %ld %ld\n",lcnt,wcnt+lcnt,ccnt);
}
