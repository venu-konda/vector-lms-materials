#include<stdio.h>

struct
{
	int roll;
		char name[20];
}v1={123,"abcd"};

int main()
{


	printf("%d %s\n",v1.roll,v1.name);

}
