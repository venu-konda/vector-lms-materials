#include<iostream>
using namespace std;

namespace ABC
{
	int data1=34;
	void foo()
	{
		cout<<"ABC foo:"<<endl;
	}
	namespace pqr
	{
		float x=34.5;
		struct St
		{
			int r;
			string s1;
		}v;
	}
}

int main()
{
	cout<<ABC::data1<<endl;
	ABC::foo();
	cout<<ABC::pqr::x<<endl;
	cout<<"enter the r:"<<endl;
	cin>>ABC::pqr::v.r;
	cout<<"enter the s1:"<<endl;
	cin>>ABC::pqr::v.s1;
	cout<<ABC::pqr::v.r<<endl;
	cout<<ABC::pqr::v.s1<<endl;
}


