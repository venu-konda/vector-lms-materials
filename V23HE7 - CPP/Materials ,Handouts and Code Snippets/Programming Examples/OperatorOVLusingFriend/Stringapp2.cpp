#include<iostream>
#include<cstring>
using namespace std;

#include"String.cpp"

int main()
{
	char str[30];
	cout<<"enter the string:"<<endl;
	cin>>str;
	String s1(str,strlen(str)+1);
	cout<<"enter the string:"<<endl;
	cin>>str;
	String s2(str,strlen(str)+1);
	if(s1==s2)
		cout<<"both are equal:"<<endl;
	else
		cout<<"both are not equal:"<<endl;
	s1.Print();
	s2.Print();

}
