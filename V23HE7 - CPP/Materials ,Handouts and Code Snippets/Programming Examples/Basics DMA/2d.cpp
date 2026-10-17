#include<iostream>
using namespace std;
int ** input(int **a,int r,int c)
{
	int i,j;
	a=new int*[r];
	for(i=0;i<r;i++)
	{
		a[i]=new int[c];
		for(j=0;j<c;j++)
			cin>>a[i][j];
	}
	return a;
}
void print(int **a,int r,int c)
{
	for(int i=0;i<r;i++,cout<<endl)
		for(int j=0;j<c;j++)
			cout<<a[i][j]<<" ";
	cout<<endl;
}

int main()
{
	int **arr=NULL;
	int row,col;
	cout<<"enter the row:"<<endl;
	cin>>row;
	cout<<"enter the col:"<<endl;
	cin>>col;
	arr=input(arr,row,col);
	print(arr,row,col);
}
