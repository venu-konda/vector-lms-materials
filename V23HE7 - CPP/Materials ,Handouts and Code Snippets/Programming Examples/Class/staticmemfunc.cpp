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
		static void TotalObjects()
		{
		  cout<<"total objects :"<<cnt<<endl;
		  //cout<<"id:"<<id<<endl;//error
		}
};
int Student :: cnt=0;
int main()
{	Student :: TotalObjects();
	Student A[5];
	for(int i=0;i<5;i++)
		A[i].Print();
	Student :: TotalObjects();

}
