#include"myheader.h"

STUDENT * SyncFromFile(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL;
	STUDENT v;
	long size=sizeof(STUDENT)-sizeof(STUDENT *);
	FILE *fp;
	fp=fopen("STU","r");
	if(fp==NULL)
	{
		return head;
	}
	while(fread(&v,size,1,fp)==1)
	{
		newnode=calloc(1,sizeof(STUDENT));
		if(newnode==NULL)
		{
			printf("node not created\n");
		}
		else
		{
			newnode->id=v.id;
			newnode->marks=v.marks;
			strcpy(newnode->name,v.name);
			if(head==NULL)
			{
				head=newnode;
			}
			else
			{
				temp=head;
				while(temp->link)
				{
					temp=temp->link;
				}
				temp->link=newnode;
			}
		}
	}
	fclose(fp);
	return head;
}



