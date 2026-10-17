#include<iostream>

using namespace std;

template<class type1,class type2>
void print(type1 a, type2 b)
{	cout<<"templates fun:"<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
}

void print(int a,string b)
{	cout<<"specific func:"<<endl;
	cout<<a<<endl;
	cout<<b<<endl;
}
int main()
{	char str[]="abcd";
	string s1="xyz";
	print(12.3,'A');
	print(str,7.8f);
	print(56,s1);
}
