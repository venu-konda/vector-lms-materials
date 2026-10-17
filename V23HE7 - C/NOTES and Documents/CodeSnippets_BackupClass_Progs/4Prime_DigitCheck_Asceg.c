#include<stdio.h>
int main()
{
        int data,min,max,i,cnt=0,j,digit,flag=0,rem,cur,prev=9,flag1=0;
        printf("enter data ");
        scanf("%d%d",&min,&max);
	printf("enter digit ");
	scanf("%d",&digit);

	for(i=min;i<=max;i++)
	{
		cnt=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				cnt++;
		}
		if(cnt==2)
		{
			data=i;
			flag=0;
			while(data)
			{
				rem=data%10;
				if(rem==digit)
				{
					flag=1;
					break;
				}
				data=data/10;
			}
			if(flag==1)
			{
				data=i;
				flag1=0;
				prev=9;
				while(data)
				{
					cur=data%10;
					if(cur>prev)
					{
						flag1=1;
						break;
					}
					prev=cur;
					data=data/10;
				}
				if(flag1==0)
					printf("%d ",i);
			}
				
		}
	}
}


