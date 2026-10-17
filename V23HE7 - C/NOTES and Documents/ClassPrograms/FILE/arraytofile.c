#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[5]={12,45,78,98,34};
	FILE *fp;
	fp=fopen("arr","w");
	fwrite(a,sizeof(a),1,fp);
	fclose(fp);
}
