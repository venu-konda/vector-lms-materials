#include<iostream>
using namespace std;

int main()
{
	int num;
	cout<<"enter the num:"<<endl;
	cin>>num;
	cout.width(6);
	cout.fill('*');
	//cout<<left;
	cout.setf(ios::left,ios::adjustfield);
	cout<<num<<endl;
}
