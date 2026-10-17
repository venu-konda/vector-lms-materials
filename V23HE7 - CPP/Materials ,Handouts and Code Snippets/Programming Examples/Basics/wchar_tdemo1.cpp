#include<iostream>
#include<clocale>

using namespace std;

int main()
{	setlocale(LC_CTYPE,"");
	wchar_t ch;
	for(ch=9728;ch<9983;ch++)
		wcout<<ch<<" ";

}
