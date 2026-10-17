#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
pthread_t tid1,tid2;
int var=5;
void *f1(void *);
void *f2(void *);

int main()
{
	printf("in main...\n");
	pthread_create(&tid1,NULL,f1,NULL);
	pthread_create(&tid2,NULL,f2,NULL);
	//here two new threads(jobs) created. but execution by scheduler.
	printf("two new jobs created...\n");
	printf("Main exiting...\n");
	pthread_exit(NULL);
	return 0;
}
void *f1(void *p)
{
	while(1)
	{
		printf("in f1...var=%d\n",var);
		++var;
		sleep(1);
	}
	printf("thread1..exiting\n");
	pthread_exit(NULL);

}
void *f2(void *p)
{
	while(1)
	{
		printf("in f2...%d\n",var);
		sleep(1);
	}
	printf("thread2 exiting\n");
	pthread_exit(NULL);
	
}

