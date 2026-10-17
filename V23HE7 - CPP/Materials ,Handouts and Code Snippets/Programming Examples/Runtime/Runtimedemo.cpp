#include<iostream>
using namespace std;

#include"Mother.cpp"
#include"Child1.cpp"
#include"Child2.cpp"
#include"Child3.cpp"

int main()
{	int choice;
	Mother *ptr=NULL;
	while(1)
	{
	cout<<"1. Child1 2.Child2 3.Child3 4.exit:"<<endl;
	cout<<"enter the choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: ptr=new Child1;
			break;
		case 2: ptr=new Child2;
			break;
		case 3: ptr=new Child3;
			break;
		case 4: exit(0);
			break;
	}
	if(ptr)
	{
		ptr->Whomi();
		ptr->Qualification();
		ptr->Profession();
		ptr->Hobby();
		delete ptr;
		ptr=NULL;
	}
	}
}










