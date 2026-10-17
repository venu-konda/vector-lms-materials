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
	while(1)
	{
//		printf("Enter the data\n");
//		scanf("%c",&ch);
		if(ch=='q')
		{
			break;
		}
		ret=write(fd,&ch,1);
		if(ret<1)
		{
			perror("write");
			break;
		}
		ch++;
	}
	printf("Writing is completed\n");
	close(fd);
}

