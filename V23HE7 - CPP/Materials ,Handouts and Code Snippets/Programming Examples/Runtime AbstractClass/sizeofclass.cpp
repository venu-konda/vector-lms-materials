#include<iostream>
using namespace std;

class ABC
{
	int data1;
	public : ABC()
		 {
			 data1=10;
		 }
		virtual  void print()
		 {
			 cout<<"data1:"<<data1<<endl;
		 }
		virtual void f1()
		{
			cout<<"hello:"<<endl;

		}
};

int main()
{
	ABC obj;
	cout<<"size:"<<sizeof(obj)<<endl;
}
