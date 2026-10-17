/*Writing the data into the file*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
main(int argc,char *argv[])
{
	int fd=open(argv[1],O_CREAT|O_WRONLY,0660);
	char ch='A',ret;
	if(fd<0)
	{
		perror("open");
		exit(0);
	}
	printf("file dp=%d\n",fd);

	ret=write(fd,&ch,1);
	if(ret<1)
	{
		perror("write");
		exit(0);
	}
	ch++;
	dup2(fd,1);
	ret=write(1,&ch,1);
	if(ret<1)
	{
		perror("write");
		exit(0);
	}

	printf("Writing is completed\n");
	close(fd);
}

