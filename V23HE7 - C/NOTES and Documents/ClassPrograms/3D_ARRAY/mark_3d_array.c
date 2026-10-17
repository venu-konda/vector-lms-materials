#include<stdio.h>
void input(int (*a)[2][3],int x);
void display(int (*p)[2][3],int x)
{
   for(int i=0;i<x;i++)
   {
	   printf("*************************************\n");
           printf("student %d\n\n",i+1);
	   for(int j=0;j<2;j++)
	   {
		   printf("semester %d marks\n\n",j+1);
		   for(int k=0;k<3;k++)
		   {
			   printf("subect[%d] :",k+1);
			   printf("%d\n",p[i][j][k]);
		   }
	    }
	   printf("***************************************\n");
   }
}
int main()
{
	int a[2][2][3];
	input(a,2);
	display(a,2);

}

void input(int (*p)[2][3],int x)
{
   for(int i=0;i<x;i++)
   {
     printf("enter student %d",i+1);
     for(int j=0;j<2;j++)
     {
	     printf("semester %d marks\n",j+1);
      {
	for(int k=0;k<3;k++)
	{
		printf("enter marks scored in subject[%d]\n",k+1);
		scanf("%d",&p[i][j][k]);
	}

      }
     }
   }
}
