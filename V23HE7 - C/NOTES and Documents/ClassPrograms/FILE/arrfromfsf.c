#include<stdio.h>
int main()
{
	int b[5];
	FILE *fp;
	int i;
	fp=fopen("arr.txt","r");
	for(i=0;i<5;i++)
	fscanf(fp,"%d",&b[i]);

	for(i=0;i<5;i++)
		printf("%d ",b[i]);
	fclose(fp);

}
