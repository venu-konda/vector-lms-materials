class Student
{	int roll;
	char name[20];
	float marks[6];
	public : Student()
		 {
			 cout<<"enter the roll:"<<endl;
			 cin>>roll;
			 cout<<"enter the name:"<<endl;
			 cin>>name;
		 }
		 void Print()
		 {
			 cout<<"roll:"<<roll<<endl;
			 cout<<"name:"<<name<<endl;
			 cout<<"marks:";
			 for(int i=0;i<6;i++)
				 cout<<mark[i]<<" ";
			 cout<<endl;
		 }
};
