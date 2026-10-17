#include<iostream>
using namespace std;

/*int Mul(int a,int b)
{
	return a*b;
 }*/
float Mul(float a,float b)
{
	return a*b;
}
int Mul(int a,int b,int c=1)
{
	return a*b*c;
}

int main()
{
	cout<<Mul(10,20)<<endl;
	cout<<Mul(2.3f,6.7f)<<endl;
	cout<<Mul(2,3,4)<<endl;
	}
