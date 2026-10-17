#include<iostream>
using namespace std;

int Add(int,int,int=0 ,int=0,int=0);
int main()
{
	cout<<Add(10,30)<<endl;
	cout<<Add(100,200,300)<<endl;
	cout<<Add(10,40,50,70)<<endl;
	cout<<Add(1,2,3,4,5)<<endl;

	
}

int Add(int a,int b,int c,int d,int e)
{
	return a+b+c+d+e;
}


