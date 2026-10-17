#include<iostream>
#include<cstdlib>
#include<unistd.h>
using namespace std;

int * input(int *p,int s)
{
	p=new int[s];
	srand(getpid());
	for(int i=0;i<s;i++)
	{
		p[i]=rand()%100;
	}
	return p;
}
void Print(int *p,int s)
{
	for(int i=0;i<s;i++)
		cout<<p[i]<<" ";
	cout<<endl;
}

int * Sort(int *p,int s)
{
	int i,j,temp;
	for(i=1;i<s;i++)
	{
		temp=p[i];
		j=i-1;
		while(j>=0 && temp < p[j])
		{
			p[j+1]=p[j];
			j--;
		}
		p[j+1]=temp;
	}
	return p;
}

int main()
{
	int *arr=NULL;
	int size;
	cout<<"enter the no of elements:"<<endl;
	cin>>size;
	arr=input(arr,size);
	Print(arr,size);
	arr=Sort(arr,size);
	Print(arr,size);
	delete[]arr;
}





