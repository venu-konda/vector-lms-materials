#include<iostream>
using namespace std;

#include"Student.cpp"
#include"ECE.cpp"

int main()
{
	Student *ptr=NULL;
	ptr=new ECE;// creating ECE(child) object dynamcially and storing in Student(Parent)m pointer
	ptr->Print();

}
