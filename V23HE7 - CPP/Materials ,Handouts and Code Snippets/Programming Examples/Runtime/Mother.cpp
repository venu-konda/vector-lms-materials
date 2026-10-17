class Mother 
{
	protected : int age;
		    char name[20];
	public : Mother()
		 {
		  cout<<"Mother constructor:"<<endl;
		  cout<<"enter the age:"<<endl;
		  cin>>age;
		  cout<<"enter the name"<<endl;
		  cin>>name;
		 }
		 virtual ~Mother()
		 {
		cout<<"Mother Destructor:"<<endl;
		 }
		 virtual void Whomi()
		 {
			 cout<<"Iam a Mother:"<<endl;
		 }
		 virtual void Profession()
		 {
		cout<<"iam a homemaker:"<<endl;
		 }
		 virtual void Qualification()
		 {
			 cout<<"Iam Graduate:"<<endl;
		 }
		 virtual void Hobby()
		 {
		  cout<<"Listening Music:"<<endl;
		 }
};

