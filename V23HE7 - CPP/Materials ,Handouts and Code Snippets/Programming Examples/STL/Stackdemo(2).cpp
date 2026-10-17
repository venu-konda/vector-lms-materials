#include<iostream>
#include<stack>
using namespace std;
int main()
{
	stack<string>s;
	
	string str;
	for(int i=0;i<5;i++)
	{
		cout<<"enter the data:"<<endl;
		cin>>str;
		s.push(str);
	}
	while(!s.empty())
	{
		cout<<s.top()<<endl;
		s.pop();
	}

}
