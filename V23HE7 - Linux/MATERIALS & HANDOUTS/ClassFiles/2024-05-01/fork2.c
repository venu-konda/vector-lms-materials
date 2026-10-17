#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
main()
{
	fork();
	fork();
	fork();
	printf("Hello World\n");
}
