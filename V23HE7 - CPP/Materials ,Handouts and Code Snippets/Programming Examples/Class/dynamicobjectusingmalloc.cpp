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
		 ~ABC()
		 {
			 cout<<"ABC Destructor:"<<endl;
		 }
};

int main()
{
	ABC *ptr=NULL;
	ptr=(ABC *)malloc(sizeof( ABC));
	ptr->Print();
	free(ptr);



}










