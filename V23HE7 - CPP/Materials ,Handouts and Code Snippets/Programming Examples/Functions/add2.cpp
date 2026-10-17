#include<iostream>
using namespace std;

int Add(int a,int b)
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
	cout<<Add(100,200,300)<<endl;
	
}


