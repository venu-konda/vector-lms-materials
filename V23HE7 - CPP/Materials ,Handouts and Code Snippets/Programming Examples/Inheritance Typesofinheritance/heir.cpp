#include<iostream>
using namespace std;

#include"Student.cpp"
#include"ECE.cpp"
#include"Sports.cpp"

int main()
{
	ECE eobj;
	Sports sobj;
	eobj.SPrint();
	eobj.EPrint();

	sobj.SPrint();
	sobj.Print();
}
