#include<iostream>
#include<cstring>
using namespace std;
class Student
{
	int roll;
	char name[20];
	float marks[6];
	float tot;
	float per;
	char grade[3];
	public : void SetData()
		 {
			 cout<<"enter the roll:"<<endl;
			 cin>>roll;
			 cout<<"enter the name:"<<endl;
			 cin>>name;
			 cout<<"enter the marks:"<<endl;
			 for(int i=0;i<6;i++)
				 cin>>marks[i];
		 }
		 void CalTot()
		 {
			 tot=0;
			 for(int i=0;i<6;i++)
				 tot+=marks[i];
		 }
		 void CalPer()
		 {
			 per=tot/6;

		 }
		void CalGrade()
		{
			if(per<40)
				strcpy(grade,"C");
			else if(per>=40 && per<50)
				strcpy(grade,"B");
			else if(per>=50 && per<60)
				strcpy(grade,"B+");
			else if(per>=60 && per<70)
				strcpy(grade,"A");
			else
				strcpy(grade,"A+");
		}
		void Print()
		{
			cout<<"roll:"<<roll<<endl;
			cout<<"name:"<<name<<endl;
			cout<<"marks:";
			for(int i=0;i<6;i++)
				cout<<marks[i]<<" ";
			cout<<endl;
			cout<<"totmarks:"<<tot<<endl;
			cout<<"per:"<<per<<endl;
			cout<<"grade:"<<grade<<endl;
		}

};


int main()
{
	Student sobj;
	sobj.SetData();
	sobj.CalTot();
	sobj.CalPer();
	sobj.CalGrade();
	sobj.Print();
	}



