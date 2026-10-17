#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

#define MAX 1000
void Input(int *);
void Display(int *);

void Quick(int *,int,int);
int Partition(int *,int,int);

int main()
{
	int arr[MAX];
	Input(arr);
	printf("elements\n");
	Display(arr);
	Quick(arr,0,MAX-1);
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
		p[i]=rand()%1000;
	}
}

void Display(int *p)
{
	int i;
	for(i=0;i<MAX;i++)
		printf("%d ",p[i]);
	printf("\n");
}


void Quick(int *p,int low ,int high)
{
	int pindex;
	if(low < high)
	{
		pindex=Partition(p,low,high);
		Quick(p,low,pindex-1);// left array
		Quick(p,pindex+1,high);// right array
	}
}

int Partition(int *p,int low ,int high)
{
	int l,r,pivot,temp;
	l=low;
	r=high;
	pivot=p[low];

	while(l<r)
	{
		while(l<=high  && p[l]<=pivot)
		{
			l++;
		}
		while(r>=low && p[r]>pivot)
		{
			r--;
		}
		if(l<r)
		{


			temp=p[l];
			p[l]=p[r];
			p[r]=temp;
		}

	}
	/** swapping between the pivot and r index
	 */
	p[low]=p[r];
	p[r]=pivot;
	return r;
}

