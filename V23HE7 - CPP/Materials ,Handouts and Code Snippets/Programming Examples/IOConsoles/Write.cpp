#include<iostream>
#include<cstring>

using namespace std;

int main()
{
	char str[20];
	cout<<"enter the str:"<<endl;
	//cin>>str;
	cin.getline(str,20);
	//cout<<str;
	cout.write(str,strlen(str));
}
