class Square : public Shape
{
	protected :float side;
	public : Square()
		 { cout<<"Square constructor:"<<endl;
		    cout<<"enter the side:"<<endl;
		    cin>>side;
		 }
		 ~Square()
		 {
		   cout<<"Square Destructor:"<<endl;
		 }
		 void Whomi()
		 {
		   cout<<"Iam a Square class:"<<endl;
		 }
		 
		 void CalArea()
		 {
			 area=side*side;
		 }
		 void CalPeri()
		 {
			 peri=4*side;
		 }

};
