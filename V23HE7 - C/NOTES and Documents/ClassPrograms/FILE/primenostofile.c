#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int cnt;
int isPrime(int n)
{
	int i;
	if(n==1)
		return 0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}
int *createPrimeArr(int min,int max)
{
	int *p=NULL;
	while(min<=max)
	{
		if(isPrime(min))
		{
			p=realloc(p,(cnt+1)*sizeof(int));
			p[cnt]=min;
			cnt++;
		}
		min++;
	}
	return p;
}
void Print(int *p)
{
	int i;
	for(i=0;i<cnt;i++)
	{
		printf("%d,",p[i]);

	}

}
int main()
{
	int min,max;
	FILE *fp1,*fp2;
	int *arr=NULL;
	int i;
	printf("enter the min and max range for primenos\n");
	scanf("%d %d",&min,&max);
	arr=createPrimeArr(min,max);
	Print(arr);
	printf("total prime nos %d\n",cnt);
	fp1=fopen("primewithfwrite","w");
	fp2=fopen("primewithfprintf","w");
	fwrite(arr,sizeof(int),cnt,fp1);
	for(i=0;i<cnt;i++)
		fprintf(fp2,"%d,",arr[i]);
	printf("fp1 %ld\n",ftell(fp1));
	printf("fp2 %ld\n",ftell(fp2));

	fclose(fp1);
	fclose(fp2);

}
