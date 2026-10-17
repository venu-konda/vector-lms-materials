class Rectangle : public Shape
{
	protected :float len,bre;
	public : Rectangle()
		 { cout<<"Rectangle constructor:"<<endl;
		    cout<<"enter the len and bre:"<<endl;
		    cin>>len>>bre;
		 }
		 ~Rectangle()
		 {
		   cout<<"Rectangle Destructor:"<<endl;
		 }
		 void Whomi()
		 {
		   cout<<"Iam a Rectangle class:"<<endl;
		 }
		  void Print()
		 {	cout<<"len:"<<len<<endl;
			 cout<<"bre:"<<bre<<endl;
			 cout<<"area:"<<area<<endl;
			 cout<<"peri:"<<peri<<endl;
		 }
		 void CalArea()
		 {
			 area=len*bre;
		 }
		 void CalPeri()
		 {
			 peri=2*(len+bre);
		 }

};
