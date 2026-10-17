#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	int val;
	cout<<"enter the data:"<<endl;
	cin>>val;
	ptr=new int(val);

	cout<<*ptr<<endl;
	delete ptr;
}
