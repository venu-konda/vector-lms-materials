#include<stdio.h>
#include<unistd.h>
main()
{
	printf("PID=%d PPID=%d\n",getpid(),getppid());
}
