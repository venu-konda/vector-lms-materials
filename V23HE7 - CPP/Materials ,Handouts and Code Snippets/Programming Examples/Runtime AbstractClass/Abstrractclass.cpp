#include<iostream>
using namespace std;

#include"Shape.cpp"
#include"Rectangle.cpp"
#include"Circle.cpp"
#include"Square.cpp"

int main()
{	int choice;
	Shape *ptr=NULL;
	//Shape sobj; // compile time error
	cout<<"1. Rectangle 2. Circle 3. Square 4.exit:"<<endl;
	cout<<"enter the choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1: ptr= new Rectangle;
			break;
		case 2: ptr= new Circle;
			break;
		case 3: ptr= new Square;
			break;
		case 4: exit(0);
	}

	if(ptr)
	{
		ptr->Whomi();
		ptr->CalArea();
		ptr->CalPeri();
		ptr->Print();
		delete ptr;
		ptr=NULL;
	}
}
