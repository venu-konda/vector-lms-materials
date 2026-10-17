/*W.A.P for getting the given file size(interms of bytes)*/
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
main(int argc,char *argv[])
{
	int fd=open(argv[1],O_CREAT|O_RDONLY,0666);
	if(fd<0)
	{
		perror("open");
		exit(0);
	}
	int cnt=lseek(fd,0,SEEK_END);
	printf("File size of file %s is = %d\n",argv[1],cnt);
}
