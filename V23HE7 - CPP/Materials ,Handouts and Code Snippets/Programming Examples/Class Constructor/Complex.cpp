#include<iostream>
using namespace std;

class Complex
{
	int real,img;
	public : Complex()
		 {
			 cout<<"Def cons:"<<endl;
			 cout<<"enter the real:"<<endl;
			 cin>>real;
			 cout<<"enter the img:"<<endl;
			 cin>>img;
		 }
		 Complex(int a,int b)
		 {
			 cout<<"in parameterised cons:"<<endl;
			 real=a;
			 img=b;

		 }
		 /*Complex(Complex &e)
		 {
			 cout<<"Copy cons:"<<endl;
			 real=e.real;
			 img=e.img;
		 }*/
		 void Print()
		 {
			 cout<<real;
			 if(img>=0)
				 cout<<"+";
			 cout<<img<<"i"<<endl;
		 }
};

int main()
{
	Complex e1;
	e1.Print();
	Complex e2(67,89);
	e2.Print();
	Complex e3=e1;
	e3.Print();
}
