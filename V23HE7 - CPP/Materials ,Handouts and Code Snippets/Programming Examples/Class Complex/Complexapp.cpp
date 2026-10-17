#include<iostream>
using namespace std;

#include"Complex.h"
#include"Complex.cpp"


int main()
{
	Complex e1,e2;
	cout<<"enter the e1 details:"<<endl;
	e1.SetData();
	cout<<"enter the e2 details:"<<endl;
	e2.SetData();
	cout<<"e1:";
	e1.Print();
	cout<<"e2:";
	e2.Print();
}


