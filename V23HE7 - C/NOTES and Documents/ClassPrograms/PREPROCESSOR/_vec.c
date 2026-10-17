#include<stdio.h>
#define _vec(x) ++x * ++x
int main()
{
int a = 3, z;
z = ++a * ++a;
a -= 3;
printf("a=%d\n",a);
printf("%d %d\n", _vec(a), z);
}

