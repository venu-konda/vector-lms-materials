#include"myheader.h"

void Save(STUDENT *ptr)
{
	FILE *fp;
	long size=sizeof(STUDENT)-sizeof(STUDENT *);
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{	fp=fopen("STU","w");
		while(ptr)
		{
			fwrite(ptr,size,1,fp);
		//fprintf(fp,"%d %s %f\n",ptr->id,ptr->name,ptr->marks);
			ptr=ptr->link;
		}
		fclose(fp);
	}
}
