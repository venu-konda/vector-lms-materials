#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX 1000
void Input(int *);
void Display(int *);

void Merge(int *);
void Partition(int *,int ,int);
void Mergearr(int *,int ,int  ,int);

int main()
{
	int arr[MAX];
	Input(arr);
	printf("elements\n");
	Display(arr);
	Merge(arr);
	printf("Elements after Sorting\n");
	Display(arr);
}

void Input(int *p)
{
	int i;
	printf("%d\n",getpid());
	srand(getpid());
	for(i=0;i<MAX;i++)
	{
		p[i]=rand()%5000;
	}
}

void Display(int *p)
{
	int i;
	for(i=0;i<MAX;i++)
		printf("%d ",p[i]);
	printf("\n");
}


void Merge(int *p)
{
	Partition(p,0,MAX-1);
}

void Partition(int *p,int low ,int high)
{
	int mid;
	if(low<high)
	{
		mid=(low+high)/2;
		Partition(p,low,mid); // left array
		Partition(p,mid+1,high);// right array
		Mergearr(p,low,mid,high);
	}
}

void Mergearr(int *p,int low,int mid,int high)
{
	static int temp[MAX];
	int li,ri,i;
	li=low;
	ri=mid+1;
	i=low;
	while(li<=mid && ri<=high)
	{
		if(p[li] < p[ri])
		{
			temp[i]=p[li];
			li++;
		}
		else
		{
			temp[i]=p[ri];
			ri++;
		}
		i++;
	}
	if(li>mid) // left array is completely copied so append the elements of right array
	{
		for(;ri<=high;ri++,i++)
			temp[i]=p[ri];
	}
	else{
		// right array is competely copid we need to append the left array elements
		for(;li<=mid ; li++,i++)
		{
			temp[i]=p[li];
		}
	}
	/** updating the sorted elements to temp array **/
	for(i=low;i<=high;i++)
		p[i]=temp[i];
}
