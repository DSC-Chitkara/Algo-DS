#include<stdio.h>

void heapify(int arr[],int n,int i)
     {
     int largest=i;int temp;
     int left = (2*i)+1;
     int right=(2*i)+2;
     
     if((left<n) && (arr[largest]<arr[left]))
        
        largest=left;
     
     if((right<n )&& (arr[largest]<arr[right]))
     
        largest=right;
     
     if(largest!=i)
        {temp=arr[largest];
         arr[largest]=arr[i];
         arr[i]=temp;
     
     heapify(arr,n,largest);}
    }
    

void heapsort(int arr[],int n)
    {
     int i;int temp;
     for(i=n;i>=0;i--)
         heapify(arr,n,i);
         
    for(i=n-1;i>0;i--)
        {temp=arr[0];
         arr[0]=arr[i];
         arr[i]=temp;
         heapify(arr,i,0);
        }
   }
     
void main()
    {int arr[100];int n;int i;
     printf("\nEnter the no:of elements");
     scanf("%d",&n);
     
     printf("\nEnter the array elements");
     for(i=0;i<n;i++)
         scanf("%d",&arr[i]);
    
    heapsort(arr,n);
    
    printf("\nThe Sorted Array : \n");
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    }
