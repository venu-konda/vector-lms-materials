#include<iostream>
using namespace std;

class Student;
#include"Faculty.h"
#include"Student.cpp"
#include"Faculty.cpp"

int main()
{
	Student sobj;
	Faculty fobj;
	fobj.UpLoadMarks(sobj);
	fobj.Print();
	sobj.Print();
	sobj.MyFaculty(fobj);
}

