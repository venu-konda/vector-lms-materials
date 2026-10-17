#include<iostream>
using namespace std;

class Parent
{	int data;
	protected : int data1,data2;
	public : void SetData()
	{cout<<"enter the data:"<<endl;
		cin>>data;
	cout<<"enter the data1 and data2:"<<endl;
	cin>>data1>>data2;
	}
	void Print()
	{
		cout<<"data:"<<data<<endl;
	cout<<"data1:"<<data1<<endl;
	cout<<"data2:"<<data2<<endl;
	}
};

class Child :public Parent
{
	int a,b;
	public : void cSetData()
		 {	SetData();
			  ++data1;
			 ++data2;
			 cout<<"enter the a and b:"<<endl;
			 cin>>a>>b;
		 }
		 void cPrint()
		 {	Print();
			 cout<<"a:"<<a<<endl;
			 cout<<"b:"<<b<<endl;
		 }
};

int main()
{
	Child cobj;

	cout<<sizeof(cobj)<<endl;
	cobj.cSetData(); // self func
	cobj.cPrint();
}
