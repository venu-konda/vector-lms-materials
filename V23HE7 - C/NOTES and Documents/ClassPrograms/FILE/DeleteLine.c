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

void * delLines(char (*p)[100],int line)
{
	if(line<1 || line >cnt)
		printf("Invalid line no\n");
	else
	{
		/** index=line-1;
		memmove(p+index,p+index+1,(cnt-index+1)*sizeof(*p));  **/
		memmove(p+line-1,p+line,(cnt-line)*sizeof(*p));
		cnt--;
		p=realloc(p,cnt*sizeof(*p));
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
	if(argc!=3)
	{
		printf("Incorrect Inputs\n");
		exit(0);

	}

	lines=readFromFile(argv[1]);
	lines=delLines(lines,atoi(argv[2]));
	writeToFile(lines,argv[1]);
}

