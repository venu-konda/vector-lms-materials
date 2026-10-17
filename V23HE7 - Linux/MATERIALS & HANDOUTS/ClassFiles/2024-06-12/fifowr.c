/*Implement simplex communication P1--->FIFO--->P2*/
//Add the snippets in required places
#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
main()
{
	int fd,n;
	char a[10];
	n=mkfifo("fifo2",0666);
	//if(n==EEXIST)
	fd=open("fifo2",O_WRONLY);
	if(fd==-1)
	{
		perror("open");
		exit(0);
	}
	printf("FIFO opened for writing\n");
	do{
		scanf("%s",a);
		write(fd,a,strlen(a)+1);
	//	strcat(a,'\0');

	}while(strcmp(a,"quit"));
	close(fd);

}
