#include<iostream>
using namespace std;

class ABC
{
	int x;
	const int y;
	public : ABC():y(10)
		 {
			 cout<<"enter the x:"<<endl;
			 cin>>x;
		 }
		 ABC(int a,int b):y(b)
		{
			x=a;
		}
		 ABC(ABC &obj) :y(obj.y)
		 {
			 x=obj.x;
		 }
		void Print()
			{
				cout<<"x:"<<x<<endl;
				cout<<"y:"<<y<<endl;
			}
		void Inc()
		{
			++x;
			//++y; // error
		}
};

int main()
{
	ABC obj;
	obj.Print();
	obj.Inc();
	obj.Print();

	ABC obj1(56,89);
	obj1.Print();
	obj1.Inc();
	obj1.Print();
}

