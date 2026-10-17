#include<iostream>
using namespace std;

int Add(int a,int b)
{
	return a+b;
}
float Addfloat(float a,float b)
{
	return a+b;
}
double Adddouble(double a,double b)
{
	return a+b;
}

int main()
{
	cout<<Add(10,30)<<endl;
	cout<<Addfloat(34.5f,67.8f)<<endl;
	cout<<Adddouble(56.78,45.6)<<endl;
}


