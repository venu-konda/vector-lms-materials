#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
main()
{
	int a[2];
	if(pipe(a)==-1)
	{
		perror("pipe");
		exit(0);
	}
	int ret=fork();
	if(ret==-1)
	{
		perror("fork");
		exit(0);
	}
	if(ret)
	{//exclusive parent code
	 	close(a[0]);//read end is closed
		char str[]="VECTOR INDIAq";
		if(write(a[1],str,strlen(str))==strlen(str))
		{
			printf("ALL the bytes successfully written into the pipe\n");
		}
	}
	else
	{//exclusive child code
	 	close(a[1]);//write end is closed
		char ch;
		while(1)
		{
			if(read(a[0],&ch,1)<1)
			{
				perror("read");
				exit(0);
			}
			else
			{
				if(ch=='q')
				{
					break;
				}
				printf("%c",ch);
			}
		}
		printf("\n");
	}
}
