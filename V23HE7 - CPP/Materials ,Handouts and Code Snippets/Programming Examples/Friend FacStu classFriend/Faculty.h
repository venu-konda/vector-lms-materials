class Faculty
{
	int id;
	char name[20];
	char subject[20];
	public : Faculty();
		 void Print();
		 void UpLoadMarks(Student &);
		 //friend void Student :: MyFaculty(Faculty); // error because of incomplete type
		friend class Student;
};
