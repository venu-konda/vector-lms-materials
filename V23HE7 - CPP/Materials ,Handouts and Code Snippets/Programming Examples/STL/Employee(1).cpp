class Employee 
{	int id;
	char name[20];
	float sal;
	public:
	friend void operator>>(istream &,Employee &);
	friend void operator<<(ostream &,Employee &);
};

void operator>>(istream &in,Employee &obj)
{
	cout<<"enter the id:"<<endl;
	in>>obj.id;
	cout<<"enter the name:"<<endl;
	in>>obj.name;
	cout<<"enter the sal:"<<endl;
	in>>obj.sal;
}
void operator<<(ostream &out, Employee &obj)
{
	out<<"id:"<<obj.id<<endl;
	out<<"name:"<<obj.name<<endl;
	out<<"sal:"<<obj.sal<<endl;
}



