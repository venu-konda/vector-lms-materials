#include<iostream>
using namespace std;

#include"Array.h"
#include"Array.cpp"
void foo()
{
	Array obj;
	obj.Print();
}
int main()
{
	for(int i=0;i<3;i++)
		foo();

}
