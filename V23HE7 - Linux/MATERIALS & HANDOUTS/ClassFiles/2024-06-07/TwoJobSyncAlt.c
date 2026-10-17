#include<semaphore.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
sem_t sem1,sem2;
pthread_t  tid1,tid2;
void *thread1(void *p)
{
	char ch='A';
	int i;
	for(i=1;i<=26;i++)
	{
		sem_wait(&sem1);
		printf("%c",ch++);
		fflush(stdout);
		sem_post(&sem2);
	}
}
void *thread2(void *p)
{
	int i;
	char ch='a';
	
	for(i=1;i<=26;i++)
	{
		sem_wait(&sem2);
		printf("%c",ch++);
		fflush(stdout);
		sem_post(&sem1);
	}
}
int main()
{
	sem_init(&sem1,0,1);
	sem_init(&sem2,0,0);
	pthread_create(&tid1,NULL,thread1,NULL);
	pthread_create(&tid2,NULL,thread2,NULL);
	pthread_exit(NULL);

}
