#include<iostream>
using namespace std;
class XYZ;
class ABC
{
	int data1,data2;
	public : ABC()
		 {
			 cout<<"enter the data1 and data2:"<<endl;
			 cin>>data1>>data2;
		 }
		 void Print()
		{
			cout<<"data1"<<data1<<endl;
			cout<<"data2:"<<data2<<endl;
		}
		 void Sum(XYZ &);

};

class XYZ
{
	int data3,data4;
	public : XYZ()
		 {
			cout<<"enter the data3:"<<endl;
			cin>>data3;
			cout<<"enter the data4:"<<endl;
			cin>>data4;
			 
		 }

		 void Print()
		 {
			 cout<<"data3:"<<data3<<endl;
			 cout<<"data4:"<<data4<<endl;
		 }

friend void ABC :: Sum(XYZ &);


};


void ABC :: Sum(XYZ &obj)
{
	cout<<data1+data2+obj.data3+obj.data4<<endl;
}
int main()
{
	ABC Aobj;
	Aobj.Print();
	XYZ Xobj;
	Xobj.Print();
	Aobj.Sum(Xobj);
}




