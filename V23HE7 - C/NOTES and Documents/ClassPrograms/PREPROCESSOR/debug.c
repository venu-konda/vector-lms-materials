#include <stdio.h>

//#define DEBUG

int main()
{

#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
	printf("Hello World1...!");
#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
	
	printf("Hello World2...!");
#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
	
	printf("Hello World3...!");
#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
	
	printf("Hello World4...!");
#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
	
	printf("Hello World5...!");
#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
	
	printf("Hello World6...!");
#ifdef DEBUG
	printf("Debug messages are ON\n");
#endif
	
	printf("Hello World7...!");
	return 0;
}
