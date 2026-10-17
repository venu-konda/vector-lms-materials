#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void strrev(char *s,char *d)
{
	int i,j;
	for(i=0,j=strlen(s)-1;j>=0;i++,j--)
	{
		d[i]=s[j];
	}
	d[i]='\0';
}
void replaceAllOfSubwithRev(char *substr,char *filename)
{
	FILE *fp;
	char str[100];
	char rev[50];
	char *p=NULL;
	strrev(substr,rev);
	fp=fopen(filename,"r+");
	if(fp==NULL)
	{
		printf("%s is not found\n",filename);
		exit(0);
	}
	while(fgets(str,100,fp))
	{	p=str;
		while(p=strstr(p,substr))
		{
			strncpy(p,rev,strlen(rev));
			p=p+strlen(rev);

		}
		fseek(fp,-strlen(str),1);
		fputs(str,fp);
	}
	fclose(fp);
}

int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("incorrect Inputs\n");
		exit(0);
	}
	replaceAllOfSubwithRev(argv[1],argv[2]);

}

