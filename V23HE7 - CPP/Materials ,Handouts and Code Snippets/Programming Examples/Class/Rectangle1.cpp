#include<iostream>

using namespace std;

class Rectangle
{
	float area,peri,len,bre;
	public :	void CalArea()
	{
		area=len*bre;
	}
	void CalPeri()
	{
		peri=2*(len+bre);
	}
	void Print()
	{
		cout<<"len:"<<len<<endl;
		cout<<"bre:"<<bre<<endl;
		cout<<"area:"<<area<<endl;
		cout<<"peri:"<<peri<<endl;
	}
	void SetData()
	{
		cout<<"enter the len:"<<endl;
		cin>>len;
		cout<<"enter the bre:"<<endl;
		cin>>bre;
	}

};

int main()
{
	Rectangle robj1,robj2,robj3;
	robj1.SetData();
	robj1.CalArea();
	robj1.CalPeri();
	robj1.Print();
	
	robj2.SetData();
	robj2.CalArea();
	robj2.CalPeri();
	robj2.Print();

	robj3.SetData();
	robj3.CalArea();
	robj3.CalPeri();
	robj3.Print();

}
