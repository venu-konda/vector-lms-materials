#include<iostream>
using namespace std;
namespace ABC
{
int data1=10;
void foo()
{
	cout<<"hello"<<endl;
}
}
namespace XYZ
{
float data1=45.6;
void foo()
{
	cout<<"hi:"<<endl;
}
}
int main()
{
	cout<<ABC::data1<<endl;
	XYZ::foo();
	cout<<XYZ::data1<<endl;
	ABC::foo();
}
