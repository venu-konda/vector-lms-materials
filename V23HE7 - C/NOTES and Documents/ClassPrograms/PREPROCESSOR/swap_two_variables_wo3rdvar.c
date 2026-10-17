#include<stdio.h>

#define SWAP(a,b) a=a+b; b=a-b; a=a-b;
//#define SWAP(a,b)  a^=b; b^=a;a^=b;
void main()
{
int a=89,b=41;
printf("Before swapping a=%d, b=%d\n",a,b);
SWAP(a,b);
printf("After swapping  a=%d, b=%d\n",a,b);
}
