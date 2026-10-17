#include<iostream>
using namespace std;

namespace ABC
{
	int data1=20;
	void foo()
	{
		cout<<"ABC foo:"<<endl;
	}
}
using namespace ABC;
int main()
{
	cout<<data1<<endl;
	foo();
}
