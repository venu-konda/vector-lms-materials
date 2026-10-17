#include<stdio.h>

#define SWAP(a,b) temp=a; a=b; b=temp;

void main()
{
int a=3,b=5,temp=0;
printf("Before swapping a=%d, b=%d\n",a,b);
SWAP(a,b)
printf("After swapping  a=%d, b=%d\n",a,b);
}
