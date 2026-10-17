#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void mygrep(char *substr,char *filename)
{
	FILE *fp;
	char str[100];
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s is not found\n",filename);
		exit(0);
	}
	while(fgets(str,100,fp))
	{
		if(strstr(str,substr))
			printf("%s\n",str);
	}
	fclose(fp);
}

int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("Incorrect Inputs\n");
	       exit(0);
	}
	mygrep(argv[1],argv[2]);

}	
