class String
{
	char *ptr;
	int size;
	public : String()
		 {
			 ptr=NULL;
			 size=0;
		 }
		 String(char *p,int size)
		 {
			this-> size=size;
			ptr=new char [size];
			strcpy(ptr,p);
		 }

		 String(String &S)
		 {
			 cout<<"Copy cons:"<<endl;
			 size=S.size;
			 ptr=new char[size];
			 strcpy(ptr,S.ptr);
		 }
		 void operator=(String &S)
		 {
			 cout<<"in Assignment operator:"<<endl;
			 size=S.size;
			 ptr=new char[size];
			 strcpy(ptr,S.ptr);
		 }

		 bool operator==(String &S)
		 {
			 if(strcmp(ptr,S.ptr)==0)
				 return true;
			 return false;
		 }

		 String& operator+(String &S)
		 {
			 static String temp;
			temp.size=size+S.size;

			temp.ptr=new char[temp.size];
			strcpy(temp.ptr,ptr);
			strcat(temp.ptr,S.ptr);
			return temp;
		 }
		 char operator[](int index)
		 {
			 if(index <0 || index >=size)
				 return -1;
			 else
				 return ptr[index];
		 }
		 void Print()
		 {
			 cout<<"ptr:"<<ptr<<endl;
			 cout<<"size:"<<size<<endl;
		 }
		 ~String()
		 {
			 delete[]ptr;
			 ptr=NULL;
			 size=0;
		 }
};









