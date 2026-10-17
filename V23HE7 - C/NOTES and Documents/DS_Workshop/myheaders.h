
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdio_ext.h>
struct stu
{
	int roll;
	char *name;
	float per;
	struct stu *next;
};
struct stu *add_last(struct stu*);
void print_nodes(struct stu*);
void print_mid_nodes(struct stu*);
struct stu *delall(struct stu*);
void printMenu();
char *getstring();
