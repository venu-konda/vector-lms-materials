#include<iostream>
using namespace std;

int data1=10;
void foo()
{
	cout<<"hello"<<endl;
}
float data1=45.6;
void foo()
{
	cout<<"hi:"<<endl;
}

int main()
{
	cout<<data1<<endl;
	foo();
}
