class Student
{
	protected : int roll;
		    char name[20];
	public : Student()
		 {
			 cout<<"Student Cons:"<<endl;
			 cout<<"enter the roll:"<<endl;
			 cin>>roll;
			 cout<<"enter the name:"<<endl;
			 cin>>name;

		 }
		 ~Student()
		 {
			 cout<<"Student Destructor:"<<endl;
		 }
		 void SPrint()
		 {
			 cout<<"roll:"<<roll<<endl;
			 cout<<"name:"<<name<<endl;
		 }
};
