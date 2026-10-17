class Result : public ECE , public Sports
{
	float totmarks,per;
	char grade[3];
	public : Result()
		 {
			 cout<<"Result Constructor:"<<endl;
			 totmarks=per=0;
		 }
		 void CalTotMarks()
		 {
			 for(int i=0;i<6;i++)
			 {
				 totmarks+=marks[i];
			 }
		 }
		 void CalPer()
		 {
			 per=totmarks/6;
		 }
		 void CalGrade()
		 {
			 if(per < 40)
				 strcpy(grade,"C");
			 else if((per >= 40)&&(per < 50))
				 strcpy(grade,"B");
			 else if((per >= 50)&&(per < 60))
				 strcpy(grade,"B+");
			 else if((per >= 60)&&(per < 70))
				 strcpy(grade,"A");
			 else
				 strcpy(grade,"A+");
		 }
		 ~Result()
		 {
			 cout<<"Result Destructor:"<<endl;
		 }
		 void RPrint()
		 {
			 SPrint();
			 EPrint();
			 Print();
			 cout<<"totmarks:"<<totmarks<<endl;
			 cout<<"per:"<<per<<endl;
			 cout<<"grade:"<<grade<<endl;
		 }
};







