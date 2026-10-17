#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void print(char*,int);
void input(char *,int);
int cntVowels(char*,int);
int main()
{
	char arr[20];
	input(arr,20);
	print(arr,sizeof(arr)/sizeof(*arr));
	//printf("vowel count:%d\n",cntVowels(arr));

}
void input(char *ptr,int n)
{
	int i;
	srand(getpid());
	for(i=0;i<n;i++)
	{
         if(rand()%2)
	  ptr[i]=rand()%26+65;	
	 else
	  ptr[i]=rand()%26+97;	

	 if(testRepeated(ptr,i))
		 i--;
	}



}

void print(char *ptr,int n)
{
	int i;
	printf("the data:");
	for(i=0;i<20;i++)
	 printf("%c,",ptr[i]);

printf("\n");	
return ;
}
