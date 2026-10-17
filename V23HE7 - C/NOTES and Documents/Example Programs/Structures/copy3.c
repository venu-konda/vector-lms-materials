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

	strcpy(B2.name,B1.name);
	strcpy(B2.author,B1.author);
	B2.price=B1.price;
	B2.pages=B1.pages;




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
}

