#include<iostream>
#include<fstream>
using namespace std;

#include"Student.cpp"
#include"friend.cpp"

int main()
{
	ofstream file("Stu");
	Student sobj;
	cin>>sobj;  // sobj.SetData();
	file.write((char *)&sobj,sizeof(sobj));
	file.close();
}
