#include"headers.h"
void my_isr(int c)
{
	printf("in my_isr... %d\n",c);
}



int main()
{

	struct sigaction v;
	if(fork()==0)
	{
		printf("in child ... %d\n",getpid());
		sleep(10);
		printf("child 1 terminating\n");
	}
	else
	{
		if(fork()==0)
		{
			printf("in child ... %d\n",getpid());
			sleep(5);
			printf("child 2 terminating\n");
		}
		else
		{


			v.sa_handler=my_isr;
			v.sa_flags=SA_NOCLDWAIT;
			//SIGCHLD, do not transform children into zombies when they terminate
			sigaction(SIGCHLD,&v,NULL);	

			printf("in parent  ... %d\n",getpid());
			while(1);
		}
	}


}
