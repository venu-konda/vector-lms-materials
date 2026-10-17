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
		 friend void operator>>(istream &,Student &);
		 friend void operator<<(ostream &,Student &);
};
