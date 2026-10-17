void operator>>(istream &in,Student &s)
{
	cout<<"enter the roll:"<<endl;
	in>>s.roll;
	cout<<"enter the name:"<<endl;
	in>>s.name;
	cout<<"enter the marks:"<<endl;
	in>>s.marks;
}

void operator<<(ostream &out, Student &s)
{
	out<<"roll:"<<s.roll<<endl;
	out<<"name:"<<s.name<<endl;
	out<<"marks:"<<s.marks<<endl;
}
