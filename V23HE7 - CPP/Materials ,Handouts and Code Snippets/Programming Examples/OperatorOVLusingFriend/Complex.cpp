class Complex 
{
	int real,img;
	public : Complex(int a=0,int b=0)
		 {
			 real=a;
			 img=b;
		 }
		 void Print()
		 {
			 cout<<real;
			 if(img>=0)
				 cout<<"+";
			 cout<<img<<"i"<<endl;
		 }
		 friend Complex & operator+(Complex &,Complex &);
		 friend Complex & operator-(Complex &,Complex &);
		 friend Complex & operator+(Complex &,int);
		 friend Complex & operator-(int,Complex &);
		 friend Complex & operator++(Complex &);
		 friend Complex & operator++(Complex &,int);

};
