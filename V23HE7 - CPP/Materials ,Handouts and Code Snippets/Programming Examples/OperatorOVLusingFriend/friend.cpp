Complex & operator+(Complex &a,Complex &b)
{
	static Complex temp;
	temp.real=a.real+b.real;
	temp.img=a.img+b.img;
	return temp;


}

Complex & operator-(Complex &a,Complex &b)
{
	static Complex temp;
	temp.real=a.real-b.real;
	temp.img=a.img-b.img;
	return temp;
}

Complex & operator+(Complex &a,int x)
{
	static Complex temp;
	temp.real=a.real+x;
	temp.img=a.img;
	return temp;


}

Complex & operator-(int x,Complex &e)
{
	static Complex temp;
	temp.real=x-e.real;
	temp.img=0-e.img;
	return temp;

}

Complex & operator++(Complex &e)
{
	++e.real;
	++e.img;
	return e;
}

Complex & operator++(Complex &e,int)
{
	static Complex temp;
	temp.real=e.real++;
	temp.img=e.img++;
	return temp;
}
