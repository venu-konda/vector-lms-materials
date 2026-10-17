#include<iostream>
#include<list>

using namespace std;

#include"Employee.cpp"
void print(list<Employee>&e)
{
	for(list<Employee>::iterator it=e.begin();it!=e.end();it++)

		cout<<*it;
	// it->Display();
}
int main()
{	Employee obj;
	list<Employee>e;
	for(int i=0;i<3;i++)
	{
		cin>>obj;
		e.push_back(obj);
		
	}
	print(e);
}

