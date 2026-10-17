#include<stdio.h>
#include<stdlib.h>

struct BST
{
	int data;
	struct BST *left,*right;
};

struct BST * Insert(struct BST *,int);
void Preorder(struct BST *);
void Postorder(struct BST *);
void Inorder(struct BST *);
void Search(struct BST *,int);
void FindLevel(struct BST *,int);
struct BST * FindMin(struct BST *);
struct BST * Del(struct BST *,int);
