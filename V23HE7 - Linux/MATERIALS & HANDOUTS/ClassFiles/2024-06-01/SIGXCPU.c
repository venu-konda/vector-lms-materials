#include"headers.h"
void isr(int x)
{
	printf("in isr ... sig no is %d\n",x);
}

int main()
{
	printf("%d  %d\n",getppid(),getpid());

	struct rlimit v;
	struct sigaction x;
	if(getrlimit(RLIMIT_CPU , &v)==-1)
		perror("error");
	v.rlim_cur=5;
	v.rlim_max=10;

	if(setrlimit(RLIMIT_CPU,&v)==-1)
		perror("error");

	
	x.sa_handler=isr;
	//x.sa_flags=SA_SIGINFO;
	sigaction(SIGXCPU,&x,NULL);
	printf("hai CpU...\n");
	while(1);
	


	/*
	signal(SIGXCPU,isr);
	printf("hai CpU...\n");
	while(1);
	*/
}
