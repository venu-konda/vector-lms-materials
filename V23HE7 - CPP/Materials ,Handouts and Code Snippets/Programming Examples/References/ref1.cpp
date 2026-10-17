#include<iostream>
using namespace std;

int main()
{
	int num=120;
	int &ref=num;// ref is reference to num
	cout<<"addr of num:"<<&num<<" num:"<<num<<endl;
	cout<<"addr of ref:"<<&ref<<" ref:"<<ref<<endl;

}
