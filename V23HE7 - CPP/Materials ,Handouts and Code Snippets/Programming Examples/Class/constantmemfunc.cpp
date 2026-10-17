#include<iostream>
using namespace std;

class ABC
{
	int data1,data2;
	public : ABC()
		 {
	    cout<<"enter the data1 and data2:"<<endl;
			 cin>>data1>>data2;
		 }
		 ABC(int a,int b)
		 {
			 data1=a;
			 data2=b;
		 }
		 void Print()const
		 {	//++data1;// error
			 cout<<data1<<" "<<data2<<endl;
		 }
		 void Inc()
		 {
			 ++data1;
			 ++data2;
		 }
};

int main()
{
	ABC obj1;
	obj1.Print();
	obj1.Inc();
	obj1.Print();

}










