#include<iostream>
#include<typeinfo>
using namespace std;
struct St
{
	int roll;
	char s[20];
};
int main()
{
	int data=10;
	float val=3.4;
	char var='S';
	double num=78.9;
	char str[20]="abcd";
	string s1="xyz";
	struct St v;
	cout<<typeid(data).name()<<endl;
	cout<<typeid(val).name()<<endl;
	cout<<typeid(var).name()<<endl;
	cout<<typeid(num).name()<<endl;
	cout<<typeid(str).name()<<endl;
	cout<<typeid(s1).name()<<endl;
	cout<<typeid(v).name()<<endl;


}
