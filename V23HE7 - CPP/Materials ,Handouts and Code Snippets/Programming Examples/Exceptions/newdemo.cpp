#include<iostream>
using namespace std;

int main()
{
	int *ptr=NULL;
	ptr=new int[0xffffffff];
	if(ptr==NULL)
	{
	cout<<"memory allocation faile:"<<endl;
	}
	else
	{
		for(int i=0;i<1000;i++)
		{
			ptr[i]=i+1;
			cout<<ptr[i]<<endl;
		}
	}
}

