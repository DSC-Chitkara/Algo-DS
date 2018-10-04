#include<stdio.h>
// Get the max of number 
int getMax(int arr[], int n)
{
    int mx = arr[0], i;
    for (i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
// Using countSort to sort the numbers
void countSort(int arr[], int n, int exp)
{
    int output[n]; 
    int i, count[10] = {0};
 
    for (i = 0; i < n; i++)
        count[ (arr[i]/exp)%10 ]++;
 
    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
    for (i = n - 1; i >= 0; i--)
    {
        output[count[ (arr[i]/exp)%10 ] - 1] = arr[i];
        count[ (arr[i]/exp)%10 ]--;
    }
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}

// Radix sort for sorting numbers
void radixsort(int arr[], int n)
{
    int m = getMax(arr, n),exp;
    for (exp = 1; m/exp > 0; exp *= 10)
        countSort(arr, n, exp);
}

//Function to print the array
void print(int arr[], int n)
{
	int i;
    for (i = 0; i < n; i++)
        printf("%d\t",arr[i]);
}

//Main function
int main()
{
    int n,i;
    printf("Enter number of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter elements:");
    for(i=0;i<n;++i)
    {
     scanf("%d",&arr[i]);
    }
    radixsort(arr, n);
    print(arr, n);
    return 0;
}
