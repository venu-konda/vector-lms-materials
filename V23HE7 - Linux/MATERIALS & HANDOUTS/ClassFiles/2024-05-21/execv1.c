#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
main()
{
	//ar *a[]={"Hello","Vector","Students"};
	printf("I am in P1 with PID=%d & PPID=%d",getpid(),getppid());
	execlp("ls","ls","-l",NULL);
	printf("I am back to main\n");
}
