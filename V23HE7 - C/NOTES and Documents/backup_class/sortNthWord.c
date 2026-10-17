#include<stdio.h>
#include<string.h>
char *locateNthWord(char*,int);
char*locateWordEnd(char*);
void bSort(char*,char*);
void replaceNullWithSpace(char*,int);
int main()
{
	char str[60],*ptr,*ptr2;
	int n,cnt,len,i;
	printf("Enter a string:");gets(str);
	printf("Enter the word number:");scanf("%d",&n);
	len=strlen(str);
	ptr=locateNthWord(str,n);
	if(ptr==NULL)
	{
		printf("error:word not found\n");
		return 0;
	}
	ptr2=locateWordEnd(ptr);
	bSort(ptr,ptr2);
	replaceNullWithSpace(str,len);
	printf("str:%s\n",str);
return 0;
}
void replaceNullWithSpace(char *p,int n)
{	
	int i;
	for(i=0;i<n;i++)
		if(p[i]==0)
			p[i]=32;
return;
}

void bSort(char *st,char *end)
{
	int n=end-st+1;
	int i,j;
	char temp;
for(i=n-1;i>0;i--)
 for(j=0;j<i;j++)
  if(st[j]>st[j+1])
  {
	  temp=st[j];
	  st[j]=st[j+1];
	  st[j+1]=temp;
  }	  
return;
}


char *locateWordEnd(char *p)
{
	while(*p  && (*p !=32))
		
		p++;

return p-1;	

}

char *locateNthWord(char *p,int n)
{
	int cnt=0;
	while(p=strtok(p," "))
	{
		cnt++;
		if(cnt == n)
			break;
	p=NULL;	
	}
	return p;
}
