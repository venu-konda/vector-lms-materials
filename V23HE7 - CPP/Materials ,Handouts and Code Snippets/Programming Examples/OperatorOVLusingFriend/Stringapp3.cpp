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
	String s3;
	s3=s1+s2;
	s1.Print();
	s2.Print();
	s3.Print();
	int index;
	cout<<"enter the index:"<<endl;
	cin>>index;
	char ch=s3[index];
	if(ch==-1)
		cout<<"invalid index:"<<endl;
	else
		cout<<ch<<endl;



}
