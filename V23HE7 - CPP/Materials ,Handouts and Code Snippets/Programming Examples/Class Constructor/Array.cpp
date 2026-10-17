Array :: Array()
{
	cout<<"enter the size:"<<endl;
	cin>>size;
	ptr=new int[size];

	for(int i=0;i<size;i++)
	{
		cout<<"enter the elements:"<<endl;
		cin>>ptr[i];
	}
}

Array :: Array(int *p,int s)
{
	size=s;
	ptr=new int[size];
	for(int i=0;i<size;i++)
		ptr[i]=p[i];
}

void Array :: Print()
{
	cout<<"size:"<<size<<endl;
	for(int i=0;i<size;i++)
	{
		cout<<ptr[i]<<" ";
	}
	cout<<endl;
}

void Array :: Reverse()
{
	int temp;
	for(int i=0,j=size-1;i<j;i++,j--)
	{
		temp=ptr[i];
		ptr[i]=ptr[j];
		ptr[j]=temp;
	}
}

void Array :: Sort()
{
	int temp;
	for(int i=0;i<size-1;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ptr[i]>ptr[j])
			{
				temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}

	}
}
