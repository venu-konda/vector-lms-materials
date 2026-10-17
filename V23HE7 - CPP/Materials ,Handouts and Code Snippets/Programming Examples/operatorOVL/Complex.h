class Complex
{
	int real,img;
	public : Complex(int=0,int=0);
		 void Print();
		 Complex & operator+(Complex &);
		 Complex & operator-(Complex &);
		 Complex & operator+(int);
		 Complex & operator-(int);
		 Complex & operator--(); // pre dec
		Complex & operator--(int); // post dec

};
