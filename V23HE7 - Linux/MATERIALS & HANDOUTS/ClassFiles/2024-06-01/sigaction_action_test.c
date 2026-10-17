#include<stdio.h>
#include<sys/types.h>
#include<signal.h>
void isr(int n)
{
	printf("in my isr ...%d\n",n);

}
main()
{
	struct sigaction v;
	int num;

	signal(3,isr);
//	signal(3,SIG_IGN);
	printf("enter the number...\n");
	scanf("%d",&num);
	signal(2,isr);
//	signal(2,SIG_IGN);
//	fetching old act of signal which we supplied in 1st arg
	sigaction(num,0,&v);
	
	if(v.sa_handler==SIG_DFL)
		printf("DFL....\n");
	else if(v.sa_handler==SIG_IGN)
		printf("ign...\n");
	else
		printf("my_isr...\n");
}
