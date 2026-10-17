#include<iostream>
using namespace std;

#include"Complex.cpp"
#include"friend.cpp"

int main()
{
	Complex e1(10,30),e2(56,78),e3,e4;
	cout<<"e1:";
	e1.Print();
	cout<<"e2:";
	e2.Print();
	
	e3=++e1;
	e4=e2++;
	cout<<"e1:";
	e1.Print();
	cout<<"e2:";
	e2.Print();
	cout<<"e3:";
	e3.Print();
	cout<<"e4:";
	e4.Print();
}
