#include<stdio.h>

#define token(x,y) x##y

int main()
{

	int i,k1=100,k2=200,k3=300;

	printf("%d %d %d\n",token(k,1),token(k,2),token(k,3));

	return 0;

}
