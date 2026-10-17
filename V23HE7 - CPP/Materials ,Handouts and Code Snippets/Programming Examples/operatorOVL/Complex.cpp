Complex :: Complex(int a,int b)
{
	cout<<"Complex Constructor:"<<endl;
	real=a;
	img=b;
}
void Complex :: Print()
{
	cout<<real;
	if(img>=0)
		cout<<"+";
	cout<<img<<"i"<<endl;
}

Complex & Complex :: operator+(Complex &e)
{
	static Complex temp;
	temp.real=real+e.real;
	temp.img=img+e.img;
	return temp;
}

Complex & Complex :: operator-(Complex &e)
{
	static Complex temp;
	temp.real=real-e.real;
	temp.img=img-e.img;
	return temp;
}

Complex & Complex :: operator+(int a)
{
	static Complex temp;
	temp.real=real+a;
	temp.img=img; // temp.img=img+0;
	return temp;
}
Complex & Complex :: operator-(int a)
{
	static Complex temp;
	temp.real=real-a;
	temp.img=img;
	return temp;
}

Complex & Complex :: operator--()
{
	--real;
	--img;
	return *this; // returning calling object
}

Complex & Complex :: operator--(int)
{
	static Complex temp;
	temp.real=real--;
	temp.img=img--;
	return temp;
}






