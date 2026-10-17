#include<iostream>
using namespace std;

int & Add(int &a,int &b)
{
	static int c;
	c=a+b;
	cout<<"addr of c:"<<&c<<endl;
	return c; // returning reference of c;
}

int main()
{
	int n1=10,n2=20;
	int &n3=Add(n1,n2);
	cout<<"addr of n3:"<<&n3<<endl;
	cout<<n3<<endl;
}
