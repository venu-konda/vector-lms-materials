class Shape
{
	protected : float area,peri;
	public : Shape()
		 { cout<<"Shape constructor:"<<endl;
		    area=peri=0;
		 }
		 virtual ~Shape()
		 {
		   cout<<"Shape Destructor:"<<endl;
		 }
		 virtual void Whomi()
		 {
		   cout<<"Iam Shape class:"<<endl;
		 }
		 virtual void Print()
		 {
			 cout<<"area:"<<area<<endl;
			 cout<<"peri:"<<peri<<endl;
		 }
		 virtual void CalArea()=0;
		 virtual void CalPeri()=0;
};
