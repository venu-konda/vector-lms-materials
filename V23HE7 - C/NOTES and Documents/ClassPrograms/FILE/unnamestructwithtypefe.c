#include<stdio.h>

typedef struct
{
	int roll;
		char name[20];
}V;

int main()
{
	V v1={123,"abcd"};

	printf("%d %s\n",v1.roll,v1.name);

}
