#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
void my_isr(int n)
{
	printf("in isr...%d\n",n);

}
int main()
{
	printf("hello....pid=%d\n",getpid());
	//The SIGQUIT(3) i.e ctrl+\ signal is sent to a process
	/*  ctrl+\     */
	// by its controlling terminal when the user requests that 
	// the process quit and perform a core dump.

/*
	// SIGQUIT 

	struct sigaction s;
	s.sa_handler=my_isr;
	sigaction(3,&s,NULL);
	printf("hai...\n");
	while(1);	

*/





	signal(3,my_isr);
	printf("hai...\n");
	while(1);
}
