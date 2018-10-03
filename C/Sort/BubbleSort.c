// Bubble sort is a simple sorting algorithm that compares adjacent values,
// pushing bigger or smaller values to one end of the set depending on ascending or 
// decending sort order (will default to ascending order in this case).

#include <stdio.h>
#define ARR_SIZE 10


// Prints values of array
void	printArray(int arr[ARR_SIZE])
{
	for (int i = 0; i < ARR_SIZE; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

// Swaps values pointed to by first and second
void	swap(int *first, int *second)
{
	int temp = *first;
	*first = *second;
	*second = temp;
}

int		main()
{
	int		arr[ARR_SIZE] = {2, 5, 7, 8, 4, 9, 1, 3, 0, 6};
	int		sorted = 0;
	int		temp = 0;

	// This loop will only break when swap has not been called for
	// an entire iteration through the array
	while (!(sorted))
	{
		sorted = 1;
		for (int i = 0; i < (10 - 1); i++)
		{
			// For decending order, change > to <
			if (arr[i] > arr[i+1])
			{
				swap(&arr[i], &arr[i + 1]);
				sorted = 0;
				printArray(arr);
			}
		}
	}
	return (0);
}