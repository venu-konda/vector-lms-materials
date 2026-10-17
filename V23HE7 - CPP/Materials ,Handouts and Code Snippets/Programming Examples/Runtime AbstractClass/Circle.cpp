class Circle : public Shape
{
	protected :float rad;
	public : Circle()
		 { cout<<"Circle constructor:"<<endl;
		    cout<<"enter the rad:"<<endl;
		    cin>>rad;
		 }
		 ~Circle()
		 {
		   cout<<"Circle Destructor:"<<endl;
		 }
		 void Whomi()
		 {
		   cout<<"Iam a Circle class:"<<endl;
		 }
		  void Print()
		 {	cout<<"rad:"<<rad<<endl;
			 cout<<"area:"<<area<<endl;
			 cout<<"peri:"<<peri<<endl;
		 }
		 void CalArea()
		 {
			 area=3.14*rad*rad;
		 }
		 void CalPeri()
		 {
			 peri=2*3.14*rad;
		 }

};
