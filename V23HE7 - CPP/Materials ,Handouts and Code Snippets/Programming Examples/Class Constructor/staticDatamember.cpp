#include<iostream>
using namespace std;

class ABC
{
	int a,b;
	static int cnt;
	public :ABC()
		{
		cnt++;
		cout<<"enter the a and b:"<<endl;
		cin>>a>>b;
		}
		ABC(int x,int y)
		{
			cnt++;
			a=x;
			b=y;
		}
		ABC(ABC &obj)
		{
			cnt++;
			a=obj.a;
			b=obj.b;
		}
		void Print()
		{
			cout<<"a:"<<a<<endl;
			cout<<"b:"<<b<<endl;
			cout<<"currently no of objects created:"<<cnt<<endl;
		}
		~ABC()
		{
			cout<<"Destructor:"<<endl;
		}

};

int ABC :: cnt;
int main()
{
	ABC A1;
	A1.Print();

	ABC A2(40,50);
	A2.Print();

	ABC A3=A1;
	A3.Print();

	A1.Print();
}
