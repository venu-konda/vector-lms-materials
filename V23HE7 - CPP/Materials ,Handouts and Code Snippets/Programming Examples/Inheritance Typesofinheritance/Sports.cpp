class Sports :virtual  public Student
{
	protected : char sgrade[3];
	public : Sports()
		 {
			 cout<<"Sports Constructor:"<<endl;
			 cout<<"enter the sgrade:"<<endl;
			 cin>>sgrade;
		 }
		 void Print()
		 {
			 cout<<"sgrade:"<<sgrade<<endl;
		 }
		 ~Sports()
		 {
			 cout<<"Sports Destructor:"<<endl;
		 }
};
