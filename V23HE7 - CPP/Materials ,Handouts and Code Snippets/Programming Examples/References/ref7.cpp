#include<iostream>
using namespace std;

int main()
{
	int a[5]={10,20,30,40,50};
	int &r=a[3];
	cout<<r<<endl;
	cout<<a[3]<<endl;

}
