#include<iostream>
using namespace std;

void foo(int &,int );

int main()
{
	int a=10,b=20;
	foo(b,a);
	cout<<"a:"<<a<<" b:"<<b<<endl;
}

void foo(int &x,int y)
{
	++x;
	++y;
}
