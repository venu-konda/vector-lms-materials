#include<iostream>
using namespace std;

int main()
{
	int num=1234;
	int s;
	while(num)
	{
		s=s+num%10;
		num=num/10;
	}
	cout<<s<<endl;
     cout<<"program terminating successfully:"<<endl;

}
