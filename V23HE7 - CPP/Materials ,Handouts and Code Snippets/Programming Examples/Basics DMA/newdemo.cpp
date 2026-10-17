#include<iostream>
using namespace std;

int main()
{
	int *ptr;
	ptr=new int;

	cout<<"enter the data:"<<endl;
	cin>>*ptr;
	cout<<*ptr<<endl;
	delete ptr;
}
