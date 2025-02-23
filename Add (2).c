#include"myheader.h"

STUDENT * Add(STUDENT *head)
{
	STUDENT *newnode=NULL;
	newnode=calloc(1,sizeof(STUDENT));
	if(newnode==NULL)
	{
		printf("Node not created\n");
		return head;
	}
	printf("enter the roll\n");
	scanf("%d",&newnode->roll);
	printf("enter the name\n");
	scanf("%s",newnode->name);
	newnode->link=head;
	head=newnode;
	return head;
}
