#include<iostream>
using namespace std;
class Circle; // forward declaration
class Rectangle
{
	float len,bre,area,peri;
	public : Rectangle()
		 {
			 cout<<"enter the len:"<<endl;
			 cin>>len;
			 cout<<"enter the bre:"<<endl;
			 cin>>bre;
			 area=peri=0;
		 }
		 void CalArea()
		 {
			 area=len*bre;
		 }
		 void CalPeri()
		 {
			 peri=2*(len+bre);
		 }
	friend void print(Rectangle &, Circle &);

};
class Circle
{
	float rad,area,peri;
	public : Circle()
		 {
			 cout<<"enter the rad:"<<endl;
			 cin>>rad;
			 area=peri=0;
		 }
		 void CalArea()
		 {
			 area=3.14*rad*rad;
		 }
		 void CalPeri()
		 {
			 peri=2*3.14*rad;
		 }
	friend void print(Rectangle &, Circle &);

};

void print(Rectangle &R,Circle &C)
{
	cout<<"details of Rectangle :"<<endl;
	cout<<"len:"<<R.len<<endl;
	cout<<"bre:"<<R.bre<<endl;
	cout<<"area:"<<R.area<<endl;
	cout<<"peri:"<<R.peri<<endl;
	
	cout<<"details of Circle:"<<endl;
	cout<<"rad:"<<C.rad<<endl;
	cout<<"area:"<<C.area<<endl;
	cout<<"peri:"<<C.peri<<endl;
}


int main()
{
	Rectangle robj;
	Circle cobj;
       robj.CalArea();
	robj.CalPeri();
	cobj.CalArea();
	cobj.CalPeri();
	print(robj,cobj);
}


