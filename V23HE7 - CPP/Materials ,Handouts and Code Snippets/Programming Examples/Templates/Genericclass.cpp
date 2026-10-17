template<class type1,class type2>
ABC<type1,type2>::ABC()
{
	cout<<"enter the a:"<<endl;
	cin>>a;
	cout<<"enter the b:"<<endl;
	cin>>b;
}

template<class type1,class type2>
ABC<type1,type2>::~ABC()
{
	cout<<"ABC Destructor:"<<endl;
}

template<class type1,class type2>
void ABC<type1,type2>::Print()
{
	cout<<a<<endl;
	cout<<b<<endl;
}
