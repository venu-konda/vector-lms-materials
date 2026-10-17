#include<stdio.h>
#include<stdlib.h>

typedef struct Student
{
	int roll;
	char name[20];
	struct Student *link;
}STUDENT;

STUDENT * Add(STUDENT *);  // add last
void Print(STUDENT *);
STUDENT * Del(STUDENT *); // DelFirst
void Save(STUDENT *);
STUDENT * Sync(STUDENT *); // DelFirst

int main()
{
	STUDENT *head=NULL;
	char choice;
	head=Sync(head);
	while(1)
	{
		printf("A.add P.print e.exit d.del S.Save \n");
		printf("enter the choice\n");
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'A' : head=Add(head);
				   break;
			case 'P' : Print(head);
				   break;
			case 'D' : head=Del(head);
				   break;
			case 'E' : exit(0);
			case 'S' : Save(head);
		}
	}
}

STUDENT * Add(STUDENT *head)
{
	STUDENT *newnode=NULL,*temp=NULL;
	/*** creation of node ***/
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
	{
		printf("Node not created\n");
	}
	else
	{	/** initialising the node **/
		printf("enter the roll\n");
		scanf("%d",&newnode->roll);
		printf("enter the name\n");
		scanf("%s",newnode->name);
		/** link to list **/

		// list is empty
		if(head==NULL)
		{
			head=newnode; // updating newly created node address to head

		}
		else
		{	
			temp=head;
			/** iterate in the loop unitil we reache the lastnode **/
			while(temp->link)
			{
				temp=temp->link;
			}
			temp->link=newnode; // linking newnode to last node 
		}
	}
	return head;
}

void Print(STUDENT *ptr)
{
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}

	else
	{
		while(ptr)
		{
			printf("%d %s\n",ptr->roll,ptr->name);
			ptr=ptr->link;
		}
		
	}
}

STUDENT * Del(STUDENT *head)
{
	STUDENT *temp=NULL;
	if(head==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		temp=head;
		head=head->link;
		free(temp);
	}
	return head;
}
void Save(STUDENT *ptr)
{
	FILE *fp;
	long int size=sizeof(STUDENT)-sizeof(STUDENT *);
	if(ptr==NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		fp=fopen("Stu","w");
		while(ptr)
		{
		fwrite(ptr,size,1,fp);
		ptr=ptr->link;
		}
		fclose(fp);
	}
}

STUDENT * Sync(STUDENT *head)
{
	FILE *fp;
	STUDENT *newnode=NULL,*temp=NULL;
	STUDENT var;
	long int size=sizeof(STUDENT)-sizeof(STUDENT *);
	fp=fopen("Stu","r");
	if(fp==NULL)
	{
		return NULL;
	}
	else
	{
		while(fread(&var,size,1,fp)==1)
		{
			/** creation of node ***/
			newnode=calloc(1,sizeof(STUDENT));
			if(newnode==NULL)
			{
				printf("Node not created\n");
			}
		else
		{
			newnode->roll=var.roll;
			strcpy(newnode->name,var.name);
			if(head==NULL)
			{
				head=newnode;
			}
			else
			{
				
		for(temp=head;temp->link;temp=temp->link);
			temp->link=newnode;
			}
		}
		}
	}
	return head;
}
