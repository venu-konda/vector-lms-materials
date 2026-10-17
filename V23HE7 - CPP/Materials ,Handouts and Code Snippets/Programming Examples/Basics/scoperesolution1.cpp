#include<iostream>
using namespace std;

int data=100;
int main()
{
	int data=45;
	cout<<data<<endl; // local varaible
	cout<<::data<<endl; // global variable
	{
		int data=15;
		cout<<data<<endl; // local varaible
		cout<<::data<<endl; // global variable
	}

}
