#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[])
{
	char str[100];
	FILE *src,*dest;
	if(argc!=3)
	{
		printf("incorrect inputs\n");
		printf("exe sourcefile destfile\n");
		exit(0);
	}
	src=fopen(argv[1],"r");
	if(src==NULL)
	{
		printf("%s is not found\n",argv[1]);
		exit(0);
	}
	dest=fopen(argv[2],"w");

	while(fgets(str,100,src))
	{
		fputs(str,dest);
	}

	fclose(src);
	fclose(dest);
}














