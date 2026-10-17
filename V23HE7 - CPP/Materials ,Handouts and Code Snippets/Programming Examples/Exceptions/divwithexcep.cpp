#include<iostream>
using namespace std;

int main()
{
	int num,den;
	cout<<"enter the numerator:"<<endl;
	cin>>num;
	cout<<"enter the denominator:"<<endl;
	cin>>den;
	try
	{
		if(den==0)
			throw den;
	int res=num/den;
	cout<<"res:"<<res<<endl;
	}
	catch(int a)
	{
		cout<<"divisible by zero not possible:"<<endl;
	}
	cout<<"program completed:"<<endl;
}
