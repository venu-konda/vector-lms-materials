#include<iostream>
using namespace std;

void Swap(int,int);
int main()
{
	int n1=10,n2=20;
	cout<<"n1:"<<n1<<" n2:"<<n2<<endl;
	Swap(n1,n2);
	cout<<"n1:"<<n1<<" n2:"<<n2<<endl;
}

void Swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;

}

