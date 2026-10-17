#include<iostream>
using namespace std;

int main()
{
	int *ptr=NULL;
	try
	{
		ptr=new int[0xffffffff];
		for(int i=0;i<1000;i++)
		{
			ptr[i]=i+1;
			cout<<ptr[i]<<endl;
		}
	}
	catch(... )
	{
	cout<<"memory allocation failed:"<<endl;
	cout<<"requesting beyond the heap size:"<<endl;
	}
}

