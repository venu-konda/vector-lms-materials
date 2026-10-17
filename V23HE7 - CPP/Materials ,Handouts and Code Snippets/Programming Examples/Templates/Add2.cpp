#include<iostream>
#include<typeinfo>
using namespace std;

template<class type1,class type2>
type2 Add(const type1 &a,const type2 &b)
{	cout<<typeid(a).name()<<endl;
	cout<<typeid(b).name()<<endl;

	return a+b;

}

int main()
{
	cout<<Add(10,56.7)<<endl;
	cout<<Add(7.8f,6)<<endl;
	cout<<Add(89,34)<<endl;

}
