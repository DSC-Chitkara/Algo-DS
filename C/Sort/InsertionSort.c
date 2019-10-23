#include<stdio.h>

void main() {
    
    int i,j,temp;
    int arr[100],n;
    
    printf("\nEnter the number of elements in the array");
    scanf("%d",&n);
    
    printf("\nEnter the Array elements");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    for(i=1;i<n;i++)
        {temp=arr[i];
         j=i-1;
         while(j>=0 && arr[j]>temp)
               {arr[j+1]=arr[j];
                j=j-1;
               }arr[j+1]=temp;}
    
    printf("\nThe Sorted Array\n");
    
    for(i=0;i<n;i++)
        {printf("%d ",arr[i]);}
               
}

      