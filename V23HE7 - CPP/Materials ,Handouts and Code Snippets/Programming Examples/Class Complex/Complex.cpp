void Complex :: SetData()
{
	cout<<"enter the real :"<<endl;
	cin>>real;
	cout<<"enter the img:"<<endl;
	cin>>img;
}

void Complex :: Print()
{
	cout<<real;
	if(img>=0)
		cout<<"+";
	cout<<img<<"i"<<endl;
}

Complex Complex :: Add(Complex e)
{
	Complex temp;
	temp.real=real+e.real;
	temp.img=img+e.img;
	return temp;

}

Complex & Complex :: Sub(Complex &e)
{
	static Complex temp;
	temp.real=real-e.real;
	temp.img=img-e.img;
	return temp;

}

