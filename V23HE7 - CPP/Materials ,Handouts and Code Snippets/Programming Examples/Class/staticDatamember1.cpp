#include<iostream>
using namespace std;

class Student
{
	int id;
	char name[20];
	float marks;
	static int cnt;
	public :
		Student()
		{
			cout<<"enter the name:"<<endl;
			cin>>name;
			cout<<"enter the marks:"<<endl;
			cin>>marks;
			cnt++;
			id=cnt;
		}
		void Print()
		{
			cout<<"id:"<<id<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"marks:"<<marks<<endl;
		}
};
int Student :: cnt=100;
int main()
{
	Student A[5];
	for(int i=0;i<5;i++)
		A[i].Print();

}
