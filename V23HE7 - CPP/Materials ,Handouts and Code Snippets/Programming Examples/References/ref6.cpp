#include<iostream>
using namespace std;

int main()
{
	int num=10;
	int *ptr;
	int * &q=ptr;
	ptr=&num;
	cout<<*ptr<<" "<<*q<<endl;

}
