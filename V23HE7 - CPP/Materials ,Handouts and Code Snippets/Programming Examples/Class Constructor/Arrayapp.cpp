#include<iostream>
using namespace std;

#include"Array.h"
#include"Array.cpp"

int main()
{
	Array A1;
	cout<<"A1:";
	A1.Print();
	Array A2=A1;
	cout<<"A2:";
	A2.Print();
	A2.Reverse();
	cout<<"A2:";
	A2.Print();
	cout<<"A1:";
	A1.Print();

}
