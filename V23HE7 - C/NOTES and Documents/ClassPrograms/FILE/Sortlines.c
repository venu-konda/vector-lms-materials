#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt;
void * readFromFile(char *filename)
{
	char (*line)[100]=NULL;
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
		line=realloc(line,(cnt+1)*100);
		strcpy(line[cnt],str);
		cnt++;
	}
	fclose(fp);
	return line;

}

void * sortLines(char (*p)[100])
{
	int i,j;
	char temp[100];
	for(i=1;i<cnt;i++)
	{
		for(j=0;j<cnt-i;j++)
		{
			if(strlen(p[j])>strlen(p[j+1]))
			{
				strcpy(temp,p[j]);
				strcpy(p[j],p[j+1]);
				strcpy(p[j+1],temp);
			}
		}
	}
	return p;
}
void writeToFile(char (*lines)[100],char *filename)
{
	FILE *fp;
	int i;
	fp=fopen(filename,"w");
	for(i=0;i<cnt;i++)
		fputs(lines[i],fp);
	fclose(fp);

}
int main(int argc,char *argv[])
{	char (*lines)[100]=NULL;
	if(argc!=2)
	{
		printf("Incorrect Inputs\n");
		exit(0);

	}

	lines=readFromFile(argv[1]);
	lines=sortLines(lines);
	writeToFile(lines,argv[1]);
}

