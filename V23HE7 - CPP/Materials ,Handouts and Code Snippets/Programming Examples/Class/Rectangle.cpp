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
	Rectangle robj;
	cout<<sizeof(robj)<<endl;
	robj.SetData();
	robj.CalArea();
	robj.CalPeri();
	robj.Print();

}
