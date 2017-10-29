#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *ptr;
};
int main()
{
	int choice=1;
	int value;
	struct node *start,*temp=NULL,*nnode;
	start=NULL;
	while(choice)
	{
		nnode=(struct node*)malloc(sizeof(struct node*));
		printf("enter element to be inserted");
		scanf("%d",&value);
		nnode->ptr=start;
		nnode->data=value;
		if(start==NULL)
		{
			start=nnode;
			nnode->ptr=start;
		}
		else{
		nnode->ptr=start;
		temp=start;
		temp=temp->ptr;
		while(temp->ptr!=start)
		{
			temp=temp->ptr;
		}
		temp->ptr=nnode;
		start=nnode;
		}
		printf("enter 1 to add more data and 0 to exit");
		scanf("%d",&choice);
	}
	temp=start;
	do{
	printf("%d\t",temp->data);
	temp=temp->ptr;
	}while(temp!=start);

	temp=start;
	nnode=temp->ptr;
	temp=temp->ptr;
	while(temp->ptr!=start)
	{
		temp=temp->ptr;
	}

	temp->ptr=start->ptr;
	start=start->ptr;
	free(temp->ptr);
	temp=start;
	do{
	printf("\n%d\t",temp->data);
	temp=temp->ptr;
	}while(temp!=start);
	return 0;
	}
