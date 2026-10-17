#include<iostream>
#include<fstream>
using namespace std;

#include"Student.cpp"
#include"friend.cpp"

int main()
{
	ifstream f;
	f.open("Stu");
	Student obj;
	f.read((char *)&obj,sizeof(obj));
	cout<<obj;  // obj.Print();
	f.close();
}
