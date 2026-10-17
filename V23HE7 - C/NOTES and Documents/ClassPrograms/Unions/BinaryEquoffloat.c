#include<stdio.h>
union Binary
{
	float f;
	int x;
};
void PrintBin(union Binary v)
{int i;
	for(i=31;i>=0;i--)
	{
		if((v.x>>i)&1)
			printf("1");
		else
			printf("0");
	}

}
int main()
{
union Binary v;
printf("enter the data\n");
scanf("%f",&v.f);
PrintBin(v);


}
