#include<stdio.h>
#include<string.h>
int main()
{
	char s[100],*p,*q;
	gets(s);
	puts(s);
	p=strtok(s," ");
	while(p)
	{
		q=p;
	//printf("%s\n",p);
	p=strtok(NULL," ");
	*(q+strlen(q))=' ';

	}
	printf("\n");
	puts(s);
}
