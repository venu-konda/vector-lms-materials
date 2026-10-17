Faculty :: Faculty()
{
	cout<<"enter the id:"<<endl;
	cin>>id;
	cout<<"enter the name:"<<endl;
	cin>>name;
	cout<<"enter the subject:"<<endl;
	cin>>subject;

}

void Faculty :: Print()
{
	cout<<"id:"<<id<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"subject:"<<subject<<endl;
}

void Faculty :: UpLoadMarks(Student &obj)
{
	for(int i=0;i<6;i++)
	{
		cout<<"enter the marks:"<<endl;
		cin>>obj.marks[i];
	}
}

