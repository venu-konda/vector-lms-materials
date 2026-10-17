#include<iostream>
using namespace std;

int & Add(int &a,int &b)
{
	static int c;
	c=a+b;
	return c; // returning reference of c;
}

int main()
{
	int n1=10,n2=20;
	int n3=Add(n1,n2);
	cout<<n3<<endl;
}
