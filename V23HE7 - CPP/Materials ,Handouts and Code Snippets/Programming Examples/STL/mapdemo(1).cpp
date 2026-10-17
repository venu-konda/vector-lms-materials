#include<iostream>
#include<map>
using namespace std;
void print(map<int,string>&l)
{
	map<int,string>::iterator p;
	for(p=l.begin();p!=l.end();p++)
	{
		cout<<p->first<<" "<<p->second<<endl;
	}
}
int main()
{	int n;
	string name;
	map<int,string>DB;
	for(int i=0;i<5;i++)
	{
		cout<<"enter the id:"<<endl;
		cin>>n;
		cout<<"enter the name to be associated withid:"<<endl;
		cin>>name;
		DB[n]=name;
	}
	print(DB);
	cout<<"enter the id:"<<endl;
	cin>>n;
	cout<<"enter the name:"<<endl;
	cin>>name;

	DB[n]=name;
	print(DB);
}

