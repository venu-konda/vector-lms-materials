#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	FILE *fp;
	int i;
	fp=fopen("arr.txt","w");
	for(i=0;i<5;i++)
		fprintf(fp,"%d ",a[i]);
	fclose(fp);

}
