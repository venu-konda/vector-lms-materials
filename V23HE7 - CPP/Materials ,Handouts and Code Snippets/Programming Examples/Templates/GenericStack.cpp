#include<iostream>
using namespace std;
#define MAX 5
template<class type>
class Stack
{
	type a[MAX];
	int top;
	public : Stack()
		 {
			 top=-1;
		 }
		 void Push(type data)
		 {
			 if(top==MAX-1)
			 {
			cout<<"Stack is full:"<<endl;
			 }
			 else
			 {
				 a[++top]=data;
			 }
		 }
		 type Pop()
		 {
			 return a[top--];
		 }
		 type Peek()
		 {
			 return a[top];
		 }
		 void Menu()
		 {type data;
		 char choice;
		while(1)
	{
	  cout<<"P.Push R.Pop T.Peek E.return:"<<endl;
	 cout<<"enter the choice:"<<endl;
	 cin>>choice;
	 switch(choice)
	 {
		 case 'P' : cout<<"enter the data:"<<endl;
			    cin>>data;
				Push(data);
				break;
		case 'R' : if(top==-1)
		    cout<<"Stack is empty:"<<endl;
			  else
		cout<<"data poped is :"<<Pop()<<endl;
			  break;
		case 'T' : if(top==-1)
		    cout<<"Stack is empty:"<<endl;
			  else
		cout<<"Top of the stack pointing to :"<<Peek()<<endl;
			  break;
		case 'E': return;
	 }
	}
		}
};

int main()
{	char choice;
	Stack<int>s1;
	Stack<string>s2;
	Stack<double>s3;

	cout<<sizeof(s1)<<endl;
	cout<<sizeof(s2)<<endl;
	cout<<sizeof(s3)<<endl;

	cout<<"i.integer stack s.c++string d.double e.exit:"<<endl;
	cout<<"enter the choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 'i' : s1.Menu();
			   break;
		case 's' : s2.Menu();
			   break;
		case 'd' : s3.Menu();
			   break;
		case 'e' : exit(0);
	}
}
		



