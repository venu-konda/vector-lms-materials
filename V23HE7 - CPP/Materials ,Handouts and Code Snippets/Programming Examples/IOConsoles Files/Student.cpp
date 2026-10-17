class Student
{
	int roll;
	char name[20];
	float marks;
	public : Student()
		 {
			 cout<<"Student Cons:"<<endl;
		 }
		 void Print()
		 {	cout<<"in print:"<<endl;
			 cout<<"roll:"<<roll<<endl;
			 cout<<"name:"<<name<<endl;
			 cout<<"marks:"<<marks<<endl;
		 }
		 void SetData()
		 {
			 cout<<"enter the roll:"<<endl;
			 cin>>roll;
			 cout<<"enter the name:"<<endl;
			 cin>>name;
			cout<<"enter the marks:"<<endl;
			 cin>>marks;
		 }
		 friend void operator>>(istream &,Student &);
		 friend void operator<<(ostream &,Student &);
};
