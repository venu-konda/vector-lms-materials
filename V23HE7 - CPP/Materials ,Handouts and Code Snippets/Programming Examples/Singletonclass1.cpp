#include<iostream>
using namespace std;

class Singleton
{
	int data;
	static bool flag;
	static Singleton * ptr;
	Singleton()
	{
		cout<<"Private constructor:"<<endl;
		cout<<"enter the data:"<<endl;
		cin>>data;
	}
	Singleton(int d)
	{	cout<<"In Private para cons:"<<endl;
		data=d;
	}
	public : void Print()
		 {
			 cout<<"data:"<<data<<endl;
		 }
		 static Singleton * CreateInstance(int d)
		 {
			 if(flag==false)
			 {
				 ptr=new Singleton(d);
			 	flag=true;
				return ptr;
			 }
			 else
			 {
				 return NULL;
			 }
		 }
		 ~Singleton()
		 {
			 cout<<"Object destroyed:"<<endl;
			 flag=false;
		 }
};

bool Singleton :: flag=false;
Singleton  * Singleton :: ptr=NULL;


int main()
{
	Singleton *p1=NULL,*p2=NULL;
	int d;
	cout<<"enter the data:"<<endl;
	cin>>d;
	p1= Singleton :: CreateInstance(d);
	if(p1)
	{p1->Print();
	}
	delete p1;
	p1=NULL;
	cout<<"enter the data:"<<endl;
	cin>>d;
	
	p2=Singleton :: CreateInstance(d);
	if(p2)
	{
		p2->Print();
	}
	else
		cout<<"already object is existing:"<<endl;
}


