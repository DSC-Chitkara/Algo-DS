// Idea: 
// Divide the given unsorted array into N subarrays, each containing 1 element.
// Take one pair of two singleton arrays and merge them to form an array of 2 elements.
    // N will now convert into N/2 arrays og size 2.
// Repeat the process till a single sorted array is obtained.


// C++ program for Merge Sort 
#include<iostream>
using namespace std;

// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
	int i, j, k; 
	int n1 = m - l + 1; 
	int n2 = r - m; 

// Two temporary arrays
	int L[n1], R[n2]; 

	// Copying data to temp arrays L[] and R[] 
	for (i = 0; i < n1; i++) 
		L[i] = arr[l + i]; 
	for (j = 0; j < n2; j++) 
		R[j] = arr[m + 1+ j]; 

	// Merging the temp arrays back into arr[l..r]
	i = 0; // Initial index of first subarray 
	j = 0; // Initial index of second subarray 
	k = l; // Initial index of merged subarray 
	while (i < n1 && j < n2) 
	{ 
		if (L[i] <= R[j]) 
		{ 
			arr[k] = L[i]; 
			i++; 
		} 
		else
		{ 
			arr[k] = R[j]; 
			j++; 
		} 
		k++; 
	} 

	// Copy the remaining elements of L[], if there 
	// are any
	while (i < n1) 
	{ 
		arr[k] = L[i]; 
		i++; 
		k++; 
	} 

	// Copy the remaining elements of R[], if there 
	// are any 
	while (j < n2) 
	{ 
		arr[k] = R[j]; 
		j++; 
		k++; 
	} 
} 
// Perforing merge sort
void mergeSort(int arr[], int l, int r) 
{ 
	if (l < r) 
	{ 
		int m = l+(r-l)/2; 

		// Sorting two halves
		mergeSort(arr, l, m); 
		mergeSort(arr, m+1, r); 
        //Merging them together
		merge(arr, l, m, r); 
	} 
} 

// Function to print an array 
void printArray(int A[], int size) 
{ 
	int i; 
	for (i=0; i < size; i++) 
		cout<<A[i]<<" ";
} 

int main() 
{ 
	int arr[] = {9, 7, 8, 3, 2, 1}; 
	int arr_size = sizeof(arr)/sizeof(arr[0]); 

	cout<<"Given array is \n"; 
	printArray(arr, arr_size); 

	mergeSort(arr, 0, arr_size - 1); 

	cout<<"\nSorted array is \n"; 
	printArray(arr, arr_size); 
	return 0; 
} 


// Time Complexity: O(NLogN)


