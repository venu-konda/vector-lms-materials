#include<stdio.h>
#include<string.h>

void printt(int(*p)[4],int r,int c);
void input(int(*p)[4],int r,int c);
void trranspose(int(*p)[4],int(*q)[4],int r,int c);
void printing_transpose(int (*q)[4],int r,int c);
int main()
{
	int transpose[4][4];
	int arr[4][4];
	printf("%d  ",sizeof(arr));
	printf("%d   ",sizeof(*arr));
	printf("%d",sizeof(**arr));

	int row=sizeof(arr)/sizeof(*arr);	
	int col=sizeof(*arr)/sizeof(**arr);
	printf("enter the number of elemnts\n");
	input(arr,row,col);
	printf("printing the array elemnts\n");
	printt(arr,row,col);
	trranspose(arr,transpose,row,col);
        printing_transpose(transpose, row, col);

}
void input(int(*p)[4],int r,int c)
{

    for(int i=0;i<r;i++)
    {
	    for(int j=0;j<c;j++)
	    {
		  scanf("%d",&p[i][j]);
	    }
    }
}

void printt(int(*p)[4],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			printf("%d  ",p[i][j]);
		}
		printf("\n");
	}
}
void trranspose(int(*p)[4],int(*q)[4],int r,int c)
{
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			q[j][i]=p[i][j];
		}
	
	}
}
void printing_transpose(int (*q)[4],int r,int c)
{

	for(int i=0;i<c;i++)
	{
		for(int j=0;j<r;j++)
		{
                   printf("%d ",q[i][j]);

		  }
		printf("\n");
	}
}
