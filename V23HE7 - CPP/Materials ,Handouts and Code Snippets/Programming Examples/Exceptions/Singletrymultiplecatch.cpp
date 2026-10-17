#include<iostream>
using namespace std;
void test(int field)
{	static char str[]="vector";
	string s1="embedded";
	if(field == 1)
		throw 'A';
	else if(field == 2)
		throw 123;
	else if(field == 3)
		throw 34.5f;
	else if(field == 4)
		throw 89.7;
	else if(field == 5)
		throw str;
	else if(field == 6)
		throw s1;
}


int main()
{
	int field;
	try
	{
		cout<<"enter the field no:"<<endl;
		cin>>field;
		test(field);
	}
	catch(char ch)
	{
		cout<<"character catch"<<ch<<endl;
	}
	catch(int ch)
	{
		cout<<"integer catch"<<ch<<endl;
	}
	catch(float ch)
	{
		cout<<"float catch"<<ch<<endl;
	}
	catch(double ch)
	{
		cout<<"double catch"<<ch<<endl;
	}
	catch(char * ch)
	{
		cout<<"Cstyle String catch"<<ch<<endl;
	}
	catch(string ch)
	{
		cout<<"C++ style catch"<<ch<<endl;
	}
}
