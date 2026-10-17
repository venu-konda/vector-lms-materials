#include<iostream>
#include<cstring>
using namespace std;

#include"String.cpp"

int main()
{
	String s1("vector",7);
	String s2=s1; // copy cons
	String s3;
	s3=s2;   // assignment

	s1.Print();

	s2.Print();

	s3.Print();
}
