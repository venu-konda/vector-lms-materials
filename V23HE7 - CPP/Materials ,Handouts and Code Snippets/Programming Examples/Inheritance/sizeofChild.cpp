#include<iostream>
using namespace std;

class Parent
{
	protected : int data1,data2;
	public : void SetData()
	{
	cout<<"enter the data1 and data2:"<<endl;
	cin>>data1>>data2;
	}
	void Print()
	{
	cout<<"data1:"<<data1<<endl;
	cout<<"data2:"<<data2<<endl;
	}
};

class Child :public Parent
{
	int a,b;
	public : void cSetData()
		 {
			 cout<<"enter the a and b:"<<endl;
			 cin>>a>>b;
		 }
		 void cPrint()
		 {
			 cout<<"a:"<<a<<endl;
			 cout<<"b:"<<b<<endl;
		 }
};

int main()
{
	Child cobj;

	cobj.SetData();  // inherited function
	cobj.cSetData(); // self func
	cobj.Print();
	cobj.cPrint();
}
