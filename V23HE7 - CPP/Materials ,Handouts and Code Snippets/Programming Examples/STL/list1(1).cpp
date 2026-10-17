#include<iostream>
#include<list>
using namespace std;
void print(list<int>&l)
{list<int>::iterator p;
	p=l.begin();
	for(;p!=l.end();p++)
	{
		cout<<*p<<endl;
	}


}
int main()
{	int data;
	list<int>l1;
	for(int i=0;i<5;i++)
	{
		cout<<"enter the data:"<<endl;
		cin>>data;
		l1.push_front(data);
	}
	list<int>l2;
	for(int i=0;i<3;i++)
	{
		cout<<"enter the data:"<<endl;
		cin>>data;
		l2.push_back(data);
	}
	cout<<"l1:"<<endl;
	print(l1);

	cout<<"l2:"<<endl;
	print(l2);
	l1.sort();
	l2.sort();
	cout<<"l1:"<<endl;
	print(l1);

	cout<<"l2:"<<endl;
	print(l2);

	l1.merge(l2);
	cout<<"l1:"<<endl;
	print(l1);

	cout<<"l2:"<<endl;
	print(l2);

}


