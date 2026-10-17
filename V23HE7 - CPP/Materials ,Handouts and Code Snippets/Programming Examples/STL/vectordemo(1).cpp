#include<iostream>
#include<vector>

using namespace std;
void print(vector<int>&v)
{
	for(int i=0;i<v.size();i++)
		cout<<v[i]<<" ";
	cout<<endl;
}
int main()
{
	vector<int> obj1;
	cout<<obj1.size()<<endl;
	

	for(int i=0;i<5;i++)
	{
		obj1.push_back(i+1);
	}
	cout<<obj1.size()<<endl;
	print(obj1);
	obj1.pop_back();
	print(obj1);
	vector<int>::iterator it;
	it=obj1.begin();
	obj1.insert(it+2,100);
	obj1.insert(it+1,45);
	print(obj1);

}
