#include<iostream>
using namespace std;

template<class type>
void Input(type *p,int size)
{
	for(int i=0;i<size;i++)
	{cout<<"enter the elements:"<<endl;
		cin>>p[i];
	}
}

template<class type>
void Print(type *p,int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<p[i]<<" ";
	}
	cout<<endl;
}

template<class type>
void Sort(type *p,int size)
{
	type temp;
	for(int i=1;i<size;i++)
	{
		for(int j=0;j<size-i;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
			}
		}
	}
}

int main()
{
	int a[10];
	double d[5];
	char s[7];
	char choice;
	cout<<"i.Integer c.char d.double :"<<endl;
	cout<<"enter the choice:"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 'i' : Input(a,10);
			   Print(a,10);
			 Sort(a,10);
			 Print(a,10);
			 break;
		case 'c' : Input(s,7);
			   Print(s,7);
			 Sort(s,7);
			 Print(s,7);
			 break;
		case 'd' : Input(d,5);
			   Print(d,5);
			 Sort(d,5);
			 Print(d,5);
			 break;
	}
}



