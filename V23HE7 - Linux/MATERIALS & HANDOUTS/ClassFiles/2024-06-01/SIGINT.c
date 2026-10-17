#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
void my_isr(int n)
{
	printf("in isr ....%d\n",n);
}
int main()
{
	/*
	//by using sigacton 
	printf("hello...pid=%d\n",getpid());
	struct sigaction v;// variable for sigaction
	v.sa_handler=my_isr;// assigning ISR address
	//sigemptyset(&v.sa_mask);// sa_mask have bitfield mems , so thats why using this call
	v.sa_flags=0;// not assigning any flag 
	sigaction(SIGINT,&v,0);// new action only using
	printf("hai...\n");
	while(1);
	*/





	
	
	
	// by using signal call
	printf("hello...pid=%d\n",getpid());
	void (*fp)();
	int x;
	fp=signal(SIGINT,my_isr);
	
	printf("after signal call ...\n");
	while(1);
	
}
