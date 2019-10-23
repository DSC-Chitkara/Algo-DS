
#include<stdio.h>

int partition(int x[],int lb,int ub,int ch)
{int pivot=x[lb];
 int up=ub;
 int down=lb;

 while(down<up)

      {  if(ch==1){

         while(x[down]<=pivot && down<ub)

               down++;

         while(x[up]>pivot)

               up--;}

        else if(ch==2){


         while(x[down]>=pivot && down<ub)

               down++;

         while(x[up]<pivot)

               up--;

        }


         if(down<up)

            {int temp=x[down];
             x[down]=x[up];
             x[up]=temp;}

       }
        x[lb]=x[up];
        x[up]=pivot;
        return up;}


void qs(int x[],int lb,int ub,int ch)
       {if(lb>=ub)
           return;

        int j=partition(x,lb,ub,ch);
        qs(x,lb,j-1,ch);
        qs(x,j+1,ub,ch);
        return;}



void main()

{int i,n,arr[20],ch;
 
 printf("\nEnter the no:of elements in the array ");
 scanf("%d",&n);

 printf("\nEnter the array elements ");
 for(i=0;i<n;i++)
 	 scanf("%d",&arr[i]);


 printf("\nHow do you want to sort it ?\n1.Ascending\n2.Descending ");
 scanf("%d",&ch);

 qs(arr,0,n-1,ch);

 printf("\nThe sorted array :");
 printf("\n");
 for(i=0;i<n;i++)
 	printf("\%d ",arr[i]);
}

