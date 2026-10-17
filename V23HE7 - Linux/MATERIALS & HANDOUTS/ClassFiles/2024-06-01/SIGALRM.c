#include<stdio.h>
void my_isr(int n)
{

	printf("in isr ...\n");
	alarm(1);
}
int main()
{
	printf("hello pid=%d\n",getpid());
//	signal(14,my_isr);// signal alaram can genarated...so it is going to my_isr
	alarm(3);//for 3 seconds only signal will be genarated
//	alarm(7);//  old alaram gets ignored by new alarm
	printf("hai...\n");
	while(1);
}
