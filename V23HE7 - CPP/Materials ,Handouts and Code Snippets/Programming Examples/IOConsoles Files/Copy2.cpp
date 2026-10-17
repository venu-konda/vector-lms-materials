#include<iostream>
#include<fstream>

using namespace std;

int main(int argc,char *argv[])
{	char ch;
	ifstream src;
	ofstream dest;
	if(argc!=3)
	{
		cout<<"incorrect inputs:"<<endl;
		exit(0);
	}
	src.open(argv[1]);
	dest.open(argv[2]);

	while((ch=src.get())!=EOF)
	{
		dest.put(ch);
	}
	src.close();
	dest.close();
}
