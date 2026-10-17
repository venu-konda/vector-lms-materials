#include<iostream>
using namespace std;

namespace ABC
{
	int data=20;
	void foo()
	{
		cout<<"ABC foo:"<<endl;
	}
}

int main()
{
	cout<<ABC::data<<endl;
	ABC::foo();
}
