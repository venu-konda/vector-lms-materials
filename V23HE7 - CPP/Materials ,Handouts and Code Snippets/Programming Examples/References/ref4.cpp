#include<iostream>
using namespace std;

int main()
{
	int num=10;
	int &ref=num;
	cout<<ref<<endl;
	cout<<num<<endl;
	int z=234;
	ref=z++;
	cout<<ref<<endl;
	cout<<"addr of num:"<<&num<<" num:"<<num<<endl;
	cout<<"addr of ref:"<<&ref<<" ref:"<<ref<<endl;
	cout<<"addr of z:"<<&z<<" z:"<<z<<endl;

}
