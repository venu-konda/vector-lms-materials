#include<stdio.h>
int main()
{
	char ch;
	FILE *src,*dest;
	src=fopen("data","r");
	if(src==NULL)
	{
		printf("file not found\n");
		exit(0);
	}
	dest=fopen("destfile","w");

	while((ch=fgetc(src))!=EOF)
	fputc(ch,dest);

	fclose(src);
	fclose(dest);
}
