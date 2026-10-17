#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
#define MAX 5
typedef struct Product
{
	char name[20];
	float cost;
	int quantity;
}PRODUCT;
PRODUCT * addToCart(PRODUCT *);
void viewCart(PRODUCT *);
PRODUCT * delProduct(PRODUCT *);

