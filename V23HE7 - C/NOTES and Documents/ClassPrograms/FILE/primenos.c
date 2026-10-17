#include<stdio.h>
#define INTptr int *

typedef int * INTPTR;
int main()
{
INTptr p1,p2;
INTPTR q1,q2;

printf("%ld %ld\n",sizeof(p1),sizeof(p2));
printf("%ld %ld\n",sizeof(q1),sizeof(q2));


}
