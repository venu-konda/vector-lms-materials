#include<stdio.h>

#define CHOICE 3

//command for define and assign macro expanssion during compile time is
//cc -DMACRONAME=VALUE -E filename.c
//for this file: cc -DCHOICE=1 -E conditionalcompilation.c
int main()
{
	int op1,op2,res;
	op1=13;
	op2=5;

//#undef CHOICE

#if CHOICE==1
	res=op1+op2;
	printf("%d\n",res);
#elif CHOICE==2
	res=op1-op2;
	printf("%d\n",res);
#elif CHOICE==3
	res=op1*op2;
	printf("%d\n",res);
#elif CHOICE==4
	res=op1/op2;
	printf("%d\n",res);
#elif CHOICE==5
	res=op1%op2;
	printf("%d\n",res);
#else
	printf("Invalid Choice\n");
#endif

printf("Progam completed\n");
}

