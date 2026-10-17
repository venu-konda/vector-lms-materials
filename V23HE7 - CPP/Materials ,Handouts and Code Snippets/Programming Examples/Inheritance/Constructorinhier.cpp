#include<iostream>
using namespace std;

class parent
{	protected :int data1;
	public : parent()
		 {
		 cout<<"parent def cons:"<<endl;
		 }
		 ~parent()
		 {
			 cout<<"parent destructor:"<<endl;
		 }
};

class child :public parent
{
	public : child()
		 {
			 cout<<"child def cons:"<<endl;
		 }
		 ~child()
		 {
		cout<<"child destructor:"<<endl;
		 }
};


int main()
{
	child cobj;
}
