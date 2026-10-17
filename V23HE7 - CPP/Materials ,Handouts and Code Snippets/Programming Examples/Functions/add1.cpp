#include<iostream>
using namespace std;

int Add(int a,int b)
{
	return a+b;
}
float Add(float a,int b)
{
	return a+b;
}
int Add(int a,float b)
{
	return a+b;
}
int Add(int a,int b,int c)
{
	return a+b+c;
}
int main()
{
	cout<<Add(10,30)<<endl;
	cout<<Add(34.5f,67)<<endl;
	cout<<Add(100,45.6f)<<endl;
	cout<<Add(10,20,30)<<endl;
}


