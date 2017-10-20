
// C implementation of stack
// Can be used as template in competitive programming
// AVOID C++ and USE BRAIN
 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Structure of stack
struct stack{
	int num;			//value
	struct stack *next;		// pointer to next node
};

struct stack *top;	//pointer to topmost element of stack. 


// Function that creates new stack
void create()
{
    top = NULL;
}

// Inserts value at the end
void push(int data)
{

	if (top==NULL)
	{
		top=(struct stack*)malloc(sizeof(struct stack)); 
		top->next=NULL;
		top->num=data;
	}
	else
	{
		struct stack *new_node=(struct stack*)malloc(sizeof(struct stack)); 
		new_node->next=top;
		new_node->num=data;
		top=new_node;
	}
	
	
}

// Displays the elements in stack. Yahoo!
void display()
{
	struct stack *temp;
	temp=top;
	if(temp==NULL)
	{
		printf("Stack is Empty :(  ");
	}
	else
	{
	printf("Stack is :");
		while(temp!=NULL)
		{
			printf("%d ",temp->num);
			temp=temp->next;
		}
	}
	printf("\n");

}


//Removes top element in stack (LIFO)
void  pop()
{
	struct stack *temp;
	temp=top;
	if(temp==NULL)
	{
	 printf("Error,removal from empty stack\n");
	}
	else
	{
		temp=temp->next;
	}
	printf("Removed value is: %d  \n",top->num);
	free(top);
	top=temp;
	

}



//Drivers programme
int main()
{
   create();
   int k,i,number;
   printf("Enter number of elements you want to insert! \n");
   scanf("%d",&k);
   for(i=0;i<k;i++)
   {
   	scanf("%d",&number);
   	push(number);
   }
   
   display();
   pop();
   display();
   pop();


}



