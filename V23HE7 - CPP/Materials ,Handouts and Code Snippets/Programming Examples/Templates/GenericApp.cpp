#include<iostream>
using namespace std;

#include"Genericclass.h"
#include"Genericclass.cpp"

int main()
{
	ABC<int,double>obj1;
	ABC<float,string>obj2;
	ABC<char,int>obj3;
	obj1.Print();
	obj2.Print();
	obj3.Print();
}



