#include<iostream>
using namespace std;

class ABC
{
	int data1,data2;
	public : ABC()
		 {	cout<<"in ABC COnstructor:"<<endl;
	    cout<<"enter the data1 and data2:"<<endl;
			 cin>>data1>>data2;
		 }
		 ABC(int a,int b)
		 {	cout<<"in para cons:"<<endl;
			 data1=a;
			 data2=b;
		 }
		 ABC(ABC &obj)
		 {	cout<<"Copy cons:"<<endl;

			 data1=obj.data1;
			 data2=obj.data2;
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
		 ~ABC()
		 {
			 cout<<"ABC Destructor:"<<endl;
		 }
};

int main()
{	ABC obj;
	ABC *ptr=NULL;
	ptr=new ABC;
	ptr->Print();
	//delete ptr;
	ABC *q=NULL;
	q=new ABC(67,89);
	q->Print();
	delete q;

	ABC *r=NULL;
	r=new ABC(*ptr) ; // new ABC(obj)
	r->Print();
	delete r;
	delete ptr;


}










