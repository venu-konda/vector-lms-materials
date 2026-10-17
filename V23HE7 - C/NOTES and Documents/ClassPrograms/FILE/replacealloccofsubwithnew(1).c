#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char * readFromFile(char *filename)
{
	FILE *fp;
	char *p=NULL;
	long int size;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("File not opened\n");
		exit(0);
	}
	fseek(fp,0,2);
	size=ftell(fp);
	rewind(fp);
	p=calloc(1,size+1);
	fread(p,size,1,fp);
	p[size]='\0';
	fclose(fp);
	return p;

}
char * replaceAllOccOfSubstr(char *buf,char *s1,char *s2)
{	long int l1,l2,i;
	char *p=NULL;
	p=buf;
	l1=strlen(s1);
	l2=strlen(s2);
	while(p=strstr(p,s1))
	{	i=p-buf;
		if(l2>l1)
		{
		buf=realloc(buf,strlen(buf)+1+l2-l1);
		if(buf+i!=p)
		{
			p=buf+i;
		}
		memmove(p+l2,p+l1,strlen(p+l1)+1);
		}
		else if(l2<l1)
		{
			memmove(p+l2,p+l1,strlen(p+l1)+1);
			buf=realloc(buf,strlen(buf)+1);
		}
		strncpy(p,s2,l2);
		p=p+l2;
	}
	return buf;
}

void writeToFile(char *buf,char *filename)
{
	FILE *fp;
	fp=fopen(filename,"w");
	fwrite(buf,strlen(buf),1,fp);
	fclose(fp);

}

int main(int argc, char *argv[])
{	char *buf=NULL;
	if(argc!=4)
	{
		printf("exe filename substr newstr\n");
		return 0;
	}
	buf=readFromFile(argv[1]);
	buf=replaceAllOccOfSubstr(buf,argv[2],argv[3]);
	writeToFile(buf,argv[1]);

}


