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
	struct Book B1={"abcd","xyz",678,890};
	struct Book *ptr;
	ptr=&B1;
	printf("%s %s %f %d\n",ptr->name,ptr->author,ptr->price,ptr->pages);
}

