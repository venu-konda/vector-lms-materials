/*Implement simplex communication P1--->FIFO--->P2*/
#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
#include<stdlib.h>
main()
{
	int fd,n;
	char a[10],i=0;
	fd=open("fifo2",O_RDONLY);
	if(fd==-1)
	{
		perror("open");
		exit(0);
	}
	printf("Opened fifo for reading \n");
	do{
		for(i=0;;i++)
		{
			read(fd,&a[i],1);
			if(a[i]=='\0')
				break;
		}
		printf("%s",a);
	}while(strcmp(a,"quit"));
	close(fd);

}
