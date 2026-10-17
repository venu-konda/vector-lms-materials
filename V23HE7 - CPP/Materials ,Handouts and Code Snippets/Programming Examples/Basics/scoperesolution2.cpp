#include<iostream>
using namespace std;


int main()
{
	int data=45;
	cout<<data<<endl; // local varaible
	//cout<<data<<"\n";
	{
		int data=15;
		cout<<data<<endl; // local varaible
		cout<<::data<<endl; // global variable
	}

}
