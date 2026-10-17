#include<iostream>
#include<fstream>

using namespace std;

int main(int argc,char *argv[])
{	char ch,*buf;
	ifstream src;
	ofstream dest;
	if(argc!=3)
	{
		cout<<"incorrect inputs:"<<endl;
		exit(0);
	}
	src.open(argv[1]);
	dest.open(argv[2]);
	src.seekg(0,ios::end);
	long size=src.tellg();
	src.seekg(0);   //src.seekg(0,ios::beg);
	buf=new char[size];
	src.read(buf,size);
	dest.write(buf,size);
	delete[] buf; // delete the array pointed by buf
	src.close();
	dest.close();
}
