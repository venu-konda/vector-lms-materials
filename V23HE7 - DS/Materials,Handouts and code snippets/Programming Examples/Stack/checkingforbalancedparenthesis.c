#include<stdio.h>
#define MAX 100
char Stack[MAX];
int top=-1;

void Push(char);
char Pop();

int main()
{
	char exp[MAX];
	printf("enter the exp\n");
	scanf("%s",exp);
	int i=0;
	while(exp[i])
	{
  if(exp[i]=='(' || exp[i]=='[' || exp[i]=='{')
		{
			Push(exp[i]);
		}
		else if(exp[i]==')')
		{
			if(Pop()!='(')
			{
				break;
			}
		}
		else if(exp[i]=='}')
		{
			if(Pop()!='{')
			{
				break;
			}
		}
		else if(exp[i]==']')
		{
			if(Pop()!='[')
			{
				break;
			}
		}
		i++;
	}
	if(exp[i]=='\0' && top==-1)
		printf("%s is valid expression\n",exp);
	else
		printf("%s is invalid expression\n",exp);
}

void Push(char ch)
{
	if(top==MAX-1)
		printf("Stack is Full\n");
	else
	{
		Stack[++top]=ch;
	}
}

char Pop()
{
	if(top==-1)
		return -1;
	return Stack[top--];
}
