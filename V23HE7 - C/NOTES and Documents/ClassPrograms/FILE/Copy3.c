#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * readFromFile(char *filename)
{ FILE *fp;
	char *p=NULL;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s is not found\n",filename);
		exit(0);
	}
	/** file size calculation **/
	fseek(fp,0,2);
	long size=ftell(fp);
	rewind(fp);
	p=calloc(1,size+1);
	fread(p,size,1,fp);
	p[size]='\0';
	fclose(fp);
	return p;

}
void writeToFile(char *buf,char *filename)
{
	FILE *fp;
	fp=fopen(filename,"w");
	fwrite(buf,strlen(buf),1,fp);
	fclose(fp);
}
int main(int argc,char *argv[])
{
	
	char *buf=NULL;
	buf=readFromFile(argv[1]);
	writeToFile(buf,argv[2]);
}
