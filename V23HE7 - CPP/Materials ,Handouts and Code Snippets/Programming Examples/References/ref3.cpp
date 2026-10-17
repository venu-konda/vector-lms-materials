#include<iostream>
using namespace std;

int main()
{
	int num=10;
	int &ref;      // error
	ref=num;
	cout<<ref<<endl;
}
