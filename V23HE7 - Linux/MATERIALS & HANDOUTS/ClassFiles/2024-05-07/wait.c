#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>

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
		int ret1=fork();
		if(ret1==-1)
		{
			perror("fork2");
			exit(0);
		}
		if(ret1==0)
		{//exclusive child2 code
		 
		printf("I am in child2 process with PID=%d PPId=%d\n",getpid(),getppid());
			sleep(2);
		}

		else
		{//parent code
		 int status,pid; 
		 //pid=wait(&status);
		 //waitpid(-1,&status,0);
		 pid=waitpid(ret,&status,0);
		 printf("The child process %d got exited with %d exit status\n",pid,status>>8);
		}
	}
	else
	{
		printf("I am in child process with PID=%d PPId=%d\n",getpid(),getppid());
		sleep(3);
		exit(12);
	}

}
