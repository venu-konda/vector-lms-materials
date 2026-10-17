#include<iostream>
#include<cstdlib>
using namespace std;
#define MAX 5
class Stack
{
	int a[MAX];
	int top;
	public : void SetTop()
		 {
			 top=-1;
		 }
		 void Push(int d)
		 {
			 if(top==MAX-1)
			   cout<<"Stack is full:"<<endl;
			 else
			 {
			a[++top]=d;
			 }
		 }
		int Pop()
		{
			return a[top--];
		}
		int Peek()
		{
			return a[top];
		}
		void Menu()
		{
			char choice;
			int data;
		 while(1)
		{cout<<"P.Push R.Pop T.Peek E.exit:"<<endl;
		cout<<"enter the choice:"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 'P' : cout<<"enter the data to be pushed:"<<endl;
				   cin>>data;
				   Push(data);
				   break;
			case 'R' : if(top==-1)
					   cout<<"Stack is empty:"<<endl;
				   else
				   {
					   cout<<"data poped is "<<Pop()<<endl;
				   }
				   break;
			case 'T' : if(top==-1)
			cout<<"Stack is empty:"<<endl;
			else
		cout<<"data pointed by the top of the stack is :"<<Peek()<<endl;
			break;
	case 'E' : return;
		}
		}
		}

};


int main()
{
	Stack sobj;
	sobj.SetTop();
	sobj.Menu();
}






