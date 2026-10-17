#include<stdio.h>
#include<pthread.h>
#include<unistd.h>
#include<stdlib.h>
pthread_t t1,t2,t3;
int arr[100];
int flag=0;
int checkprime(int n)
{
				//write prime logic
}
void *f1(void *t1)
{
	int i;
	//while(flag!=0);       //for synchronization
	for(i=0;i<10;i++)
	{
				//read using rand function
	}
	for(i=0;i<10;i++)
	{
				//print the elements
	}
	printf("\b\b.\n\n");
	//flag=1;
	pthread_exit(0);

}
void *f2(void *t2)
{
	int i;
	//while(flag==0);		for synchronization
	printf("\n the prime numbers are\n");
	for(i=0;i<10;i++)
	{
				//check element is prime or not
	}
	pthread_exit(0);
}
void *f3(void *t3)
{
	int min,max,i;
	//while(flag==0);		//for synchronization
	for(i=1;i<10;i++)
	{
				//find min and max element
	}
	pthread_exit(0);
}
int main()
{
	pthread_create(&t1,NULL,f1,NULL);  //for genarating numbers
	pthread_create(&t2,NULL,f2,NULL); //checking prime numbers
	pthread_create(&t3,NULL,f3,NULL); //finding min and max element
	pthread_exit(NULL);

}

