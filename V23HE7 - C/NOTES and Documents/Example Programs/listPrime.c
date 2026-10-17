#include<stdio.h>
#include<math.h>
int main()
{
	int data;
	int i,cnt=0;
	int min,max,s;
	printf("Enter range:\n");
	printf("Enter min:");scanf("%d",&min);
	printf("Enter max:");scanf("%d",&max);


for(data=min;data<=max;data++)
{
	//check data is prime or not
	s=sqrt(data);
	for(i=2;i<=s;i++)
	{
		if(data%i == 0)
		{
			break;
		}
	}

	if(i>s)
		printf("%d,",data);
fflush(stdout);
///////////////////////////////////////////

}//outer loop
return 0;
}
