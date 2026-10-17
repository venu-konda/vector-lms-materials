#include<iostream>
#include<cstring>
using namespace std;

#include"Student.cpp"
#include"ECE.cpp"
#include"Sports.cpp"
#include"Result.cpp"

int main()
{
	Result Robj;
	Robj.CalTotMarks();
	Robj.CalPer();
	Robj.CalGrade();
	Robj.RPrint();
}
