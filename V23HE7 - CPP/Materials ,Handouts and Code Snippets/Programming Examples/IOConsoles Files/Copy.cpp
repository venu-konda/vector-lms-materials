#include<iostream>
#include<fstream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(int argc,char *argv[])
{	char str[100];
	if(argc!=3)
	{
		cout<<"incorrect inputs:"<<endl;
		exit(0);
	}
	ifstream src("data");
	ofstream dest("Dest");
	while(!src.eof())//while(src)
	{
		src>>str;  
		dest<<str;
		bzero(str,100);
	}
	src.close();
	dest.close();
}

