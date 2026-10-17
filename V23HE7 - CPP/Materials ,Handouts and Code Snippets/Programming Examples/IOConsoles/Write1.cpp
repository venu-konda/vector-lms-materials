#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	int i;
	char s[]="C++ Programming";
	for(i=1;i<=strlen(s);i++)
	{
		cout.write(s,i);
		cout<<endl;
	}

}
