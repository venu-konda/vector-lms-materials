#include<iostream>
using namespace std;

int Add(int a,int b)
{
	return a+b;
}
float Add(float a,float b)
{
	return a+b;
}
double Add(double a,double b)
{
	return a+b;
}

int main()
{
	cout<<Add(10,30)<<endl;
	cout<<Add(34.5f,67.8f)<<endl;
	cout<<Add(56.78,45.6)<<endl;
}


