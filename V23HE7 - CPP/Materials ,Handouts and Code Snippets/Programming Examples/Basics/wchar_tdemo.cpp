#include<iostream>
#include<clocale>

using namespace std;

int main()
{	setlocale(LC_CTYPE,"");
	wchar_t ch;
	cout<<sizeof(ch)<<"\n";
}
