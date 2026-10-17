#include<stdio.h>
#include<math.h>
int checkPrime(int);
int checkDigit(int,int);
int main()
{
	int data,min,max,digit;
	printf("Enter range:\n");
	printf("Enter min:");scanf("%d",&min);
	printf("Enter max:");scanf("%d",&max);
	printf("Enter digit:");scanf("%d",&digit);
for(data=min;data<=max;data++)
{
	if(checkDigit(data,digit))
		if(checkPrime(data))
		    printf("%d,",data);
fflush(stdout);
///////////////////////////////////////////

}//outer loop
return 0;
}


int checkDigit(int var,int d)
{

	while(var)
	{
		if(var%10 == d)
			return 1;

		var/=10;
	}

return 0;
}

int checkPrime(int var)
{
	//test the var is prime number or not.
	//if prime number , return 1
	//if not prime number return 0

	int i;
	int s=sqrt(var);
	for(i=2;i<=s;i++)
		if((var%i)==0)
			return 0;

	return 1;

}




