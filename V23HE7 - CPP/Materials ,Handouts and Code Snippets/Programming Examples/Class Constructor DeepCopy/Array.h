class Array
{
	int *ptr;
	int size;
	public : Array();
		 Array(int *,int);
		 Array(Array &);
		 void Print();
		 void Reverse();
		 void Sort();
		 ~Array(); // destructor

};


