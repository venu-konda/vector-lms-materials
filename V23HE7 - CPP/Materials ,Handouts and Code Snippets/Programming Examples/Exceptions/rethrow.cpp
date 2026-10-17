#include<iostream>
using namespace std;
void test(int a)
{	try
	{	cout<<"in test try:"<<endl;
		if(a%2)
		{
			throw a;
		}
	}
	catch(int a)
	{	cout<<"catch of test try:"<<endl;
		throw ;
	}
}
int main()
{
	int x=11;
	try
	{
		cout<<"in try block:"<<endl;
	
			test(x);
		cout<<x<<endl;
	}
	catch(int a)
	{
		cout<<"in outer catch:"<<endl;
		cout<<a<<endl;

	}
}

