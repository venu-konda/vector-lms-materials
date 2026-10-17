#include<stdio.h>
#include<string.h>

struct Book
{
	char name[20];
	char author[20];
	float price;
	int pages;
};

int main()
{
	struct Book B1,B2;
	printf("enter the name\n");
	scanf("%s",B1.name);
	printf("enter the author\n");
	scanf("%s",B1.author);
	printf("enter the price\n");
	scanf("%f",&B1.price);
	printf("no of pages\n");
	scanf("%d",&B1.pages);
	
	printf("enter the name\n");
	scanf("%s",B2.name);
	printf("enter the author\n");
	scanf("%s",B2.author);
	printf("enter the price\n");
	scanf("%f",&B2.price);
	printf("no of pages\n");
	scanf("%d",&B2.pages);

	



	printf("details of B1\n");
	printf("name : %s\n",B1.name);
	printf("author : %s\n",B1.author);
	printf("price : %f\n",B1.price);
	printf("pages : %d\n",B1.pages);

	printf("details of B2\n");
	printf("name : %s\n",B2.name);
	printf("author : %s\n",B2.author);
	printf("price : %f\n",B2.price);
	printf("pages : %d\n",B2.pages);

	if((strcmp(B1.name,B2.name)==0) && (strcmp(B1.author,B2.author)==0) && (B1.price==B2.price)&&(B1.pages==B2.pages))
		printf("Both are equal\n");
	else
		printf("Both are not equal\n");

}

