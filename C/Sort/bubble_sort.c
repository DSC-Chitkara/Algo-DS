//Bubble Sort...

//Author : Mast Ram Sharma 
//Date   : 16/10/17

#include<stdio.h>
#include<stdlib.h>
void manually(int *,int );
void automatically(int *,int );
int* sort(int *,int );
void display(int *,int );
void compare(int *,int *,int );
int main()
{
    int size,choice;
    //Size Of Orignal Array
    printf("Enter The Size Of The Arrey :");
    scanf("%d",&size);
    int *arr;
    arr=(int*)malloc(size*sizeof(int));
    //To Get The Values Of Unsorted Array
    printf("\nEnter The Values :\n");
    for(int i=0 ;i<size ;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter Your Choice 1.Manually 2.Automatically :\n");
    scanf("%d",&choice);
    //To Check The Choice Of The User To Test The Code..
    switch(choice)
    {
        case 1: manually(arr,size);
        break;
        case 2: automatically(arr,size);
        break;
        default :printf("\nEnter The Valid Choice\n");
    }
}

//Checking The Code Through Manual Sorted Input..

void manually(int *arr,int size)
{
    int *arr1;
    printf("\n\tTesting Manually...\n");
    int *ptr = sort(arr,size);
    printf("\n\tActual Sorted Array..\n");
    display(ptr,size);
    arr1=(int*)malloc(size*sizeof(int));
    printf("Enter The Sorted Array :\n");
    for(int i=0;i<size ;i++)
    {
        scanf("%d",&arr1[i]);
    }
    printf("\n\n\tComparing....\n");
    compare(arr,arr1,size);
    
}

//To Check The Code Automatically..

void automatically(int *arr,int size)
{
    printf("\n\n\tTesting Automatically.....\n");
    int *ptr = sort(arr,size);
    display(ptr,size);
    compare(arr,ptr,size);
}

//C Code Of bubble Sort...

int* sort(int *arr,int size)
{
    int swap=0,temp;
   for(int i=0; i<(size-1) ;i++)
    {
        for(int j=0 ;j<size-i-1 ;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swap++;
            }
        }
    }
   
    return arr;    
} 

//Function To Display Array..

void display(int *arr,int size)
{
    printf("\nArray = ");
    for(int i=0 ;i<size ;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}

//Function To Compare Two Arrays..

void compare(int *arr,int *arr1,int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(*arr1 != *arr)
        {
            count=1;
            break;
        }       
        arr++;
        arr1++;
    }   
        if(count==0)
        {
            printf("\nTest Case Passed..\n");
        }
        else if(count==1)
        {
            printf("\nTest Case Failed...\n");
        }
}


//       THe ENd..//