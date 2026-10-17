#include<stdio.h>

/*** structure declaration ****/
struct ABC
{
	int data1;
	char s[20];
};
int main()
{
	struct ABC v;
	v.data1=10;
	strcpy(v.s,"abcdef");
	printf("%d %s\n",v.data1,v.s);
	printf("%ld\n",sizeof(struct ABC));
}

