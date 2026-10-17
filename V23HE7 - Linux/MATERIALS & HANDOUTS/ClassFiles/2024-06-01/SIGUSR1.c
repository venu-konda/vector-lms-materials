#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
#include<unistd.h>
#include<sys/wait.h>
volatile int sc=0;

void my_isr(int n,siginfo_t *siginfo)
{
	printf("in isr... SIGUSR2 (%d) received from %d\n",n,siginfo->si_pid);
	sc=1;
}
int main()
{
	printf("hello....pid=%d\n",getpid());
	pid_t ret;
	int status;
	int r;
	ret=fork();
	if(ret>0)
	{
		printf("in parent ... %d\n",getpid());
		
		sleep(5);
		kill(ret,SIGUSR2);
		//he SIGUSR1 and SIGUSR2 signals are set aside for you to use any way you want. 
		//They are useful for simple interprocess communication
		ret=wait(&status);
		r=0;
	}
	else
	{
		struct sigaction s;
		printf("in child ... %d\n",getpid());

		s.sa_handler=my_isr;
		s.sa_flags=SA_SIGINFO;//specifies a set of flags which modify the behavior of the signal
		sigaction(SIGUSR2,&s,NULL); 
		printf("child waiting ...\n");
		while(!sc);
		r=1;
	}
	printf("%s ... exiting.\n",r==0?"parent":"child");


}
