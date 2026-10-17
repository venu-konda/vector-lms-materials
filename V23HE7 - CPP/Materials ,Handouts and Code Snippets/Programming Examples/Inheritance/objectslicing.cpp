#include<iostream>
using namespace std;

class Parent
{
	protected : int data1;
	public : void SetData()
		 {
			cout<<"enter the data1:"<<endl;
			 cin>>data1;
		 }
		 void Print()
		 {
			 cout<<"data1:"<<data1<<endl;
		 }
};

class Child : public Parent
{
	int a,b;
	public : Child()
		 {	cout<<"enter the data1:"<<endl;

			 	cin>>data1;
			 cout<<"enter the a and b:"<<endl;
		 	cin>>a>>b;
		 }
		 void Print()
		 {
			 Parent :: Print();
			 cout<<"a:"<<a<<endl;
			 cout<<"b:"<<b<<endl;
		 }
};

int main()
{
	Parent pobj;
	Child cobj;

	cobj.Print();
	pobj=cobj;
	pobj.Print();
}
