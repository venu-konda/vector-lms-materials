#include<iostream>
#include<fstream>
using namespace std;

#include"Student.cpp"
#include"friend.cpp"

int main()
{
	Student s[5];
	fstream file("rec",ios::in | ios::out);
	for(int i=0;i<5;i++)
	{
		cin>>s[i];
	}
	file.write((char *)s,sizeof(s));
	file.seekg(0);
	Student b[5];
	file.read((char *)b,sizeof(b));

	for(int i=0;i<5;i++)
	{
	cout<<b[i];  // b[i].Print();
	}
	file.close();
}
	


