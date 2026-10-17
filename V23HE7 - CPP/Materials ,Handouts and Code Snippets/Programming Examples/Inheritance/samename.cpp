#include<iostream>
using namespace std;

class parent
{	protected :int data1;
	public : parent()
		 {
		 cout<<"parent def cons:"<<endl;
		 cout<<"enter the data1:"<<endl;
		 cin>>data1;
		 }
		 ~parent()
		 {
			 cout<<"parent destructor:"<<endl;
		 }
		 void Print()
		 {
			 cout<<"data1:"<<data1<<endl;
		 }
};

class child :public parent
{	int data2;
	public : child()
		 {
			 cout<<"child def cons:"<<endl;
			cout<<"enter the data2:"<<endl;
			 cin>>data2;
		 }
		 ~child()
		 {
		cout<<"child destructor:"<<endl;
		 }
		 void Print()
		 {
			 cout<<"data2:"<<data2<<endl;
		 }
};


int main()
{
	child cobj;
	cobj.parent :: Print();
	cobj.Print();
}
