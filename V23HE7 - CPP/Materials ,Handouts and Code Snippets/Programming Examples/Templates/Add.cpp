#include<iostream>
using namespace std;

template<class any>
any Add(any a,any b)
{
	return a+b;
}


int main()
{	string s1="vector",s2="embedded";
	cout<<Add(10,20)<<endl;
	cout<<Add(12.6,29.1)<<endl;
	cout<<Add(3.4f,7.8f)<<endl;
	cout<<Add(s1,s2)<<endl;
}

