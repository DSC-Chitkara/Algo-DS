#include<stdio.h>
// Linear search function 
int linear_search(int arr[], int n, int x) 
{ 
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
         return i;
    return -1;
} 

void main(){
	int n,i,x,choice;
	printf("Enter the number of elements in the array ");
	scanf("%d",&n);
	int a[n];
	printf("Enter the elements: \n");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched ");
	scanf("%d",&x);
	if(linear_search(a,n,x)==-1){
		printf("Element not found\n");
	}
	else{
		printf("Element x = %d is present at %d\n",x,linear_search(a,n,x)+1);
	}
	
	
}
