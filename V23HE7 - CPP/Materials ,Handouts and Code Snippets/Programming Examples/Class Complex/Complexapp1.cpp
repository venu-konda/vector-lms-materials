#include<iostream>
using namespace std;

#include"Complex.h"
#include"Complex.cpp"


int main()
{
	Complex e1,e2,e3,e4;
	cout<<"enter the e1 details:"<<endl;
	e1.SetData();
	cout<<"enter the e2 details:"<<endl;
	e2.SetData();
	e3=e1.Add(e2);
	e4=e2.Sub(e3);

	cout<<"e1:";
	e1.Print();
	cout<<"e2:";
	e2.Print();
	cout<<"e3:";
	e3.Print();
	cout<<"e4:";
	e4.Print();
}


