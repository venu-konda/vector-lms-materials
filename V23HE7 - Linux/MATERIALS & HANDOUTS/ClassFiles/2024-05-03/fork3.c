#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

main()
{
	int ret=fork();
	if(ret==-1)
	{
		perror("fork");
		exit(0);
	}
	if(ret)
	{
		printf("I am in parent process with PID=%d PPId=%d\n",getpid(),getppid());
		//while(1);
	}
	else
	{
		sleep(5);
		printf("I am in child process with PID=%d PPId=%d\n",getpid(),getppid());
		//while(1);
	}
}
