/**
 * Program to implement merge sort algorithm in C.
 * 
 * Author: Mohit Sakhuja
 * Dated: 06-October-2017
 * 
 */

#include <stdio.h>

static void merge(int array[], int first, int middle, int last);
void merge_sort(int array[], int first, int last);

int main(void)
{
    // test 1
    // Test array does not have repeating elements
    printf("Test1:\n");
    
    int arr1[10] = {6, 1, -3, 8, 0, 90, 46, 88, -12, -35};
    
    printf("Original array elements: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%3i ", arr1[i]);
    }

    merge_sort(arr1, 0, 9);

    printf("\nSorted array elements: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%3i ", arr1[i]);
    }

    
    // test 2
    // Test array has repeating elements
    printf("\n\nTest 2:\n");

    int arr2[15] = {6, 1, -3, -12, 8, 0, 0, 90, 46, 88, 6, -12, -35, -12, 8};

    printf("Original array elements: ");
    for (int i = 0; i < 15; i++)
    {
        printf("%3i ", arr2[i]);
    }

    merge_sort(arr2, 0, 14);
    
    printf("\nSorted array elements: ");
    for (int i = 0; i < 15; i++)
    {
        printf("%3i ", arr2[i]);
    }

    printf("\n");

    return 0;
}


/**
 * Method that takes an array, 
 * the indices of its first, middle and last elements as arguments,
 * and sorts the two halves of the array in the ascending order.
 *
 */
static void merge(int array[], int first, int middle, int last)
{
    // calculate sizes of the two half arrays
    int lsize = (middle - first) + 1;
    int rsize = (last - middle);

    // create two placeholder arrays
    int leftarray[lsize];
    int rightarray[rsize];

    // copy elements in the left half array
    for (int i = 0; i < lsize; i++)
    {
        leftarray[i] = array[first + i];
    }

    // copy elements in the right half array
    for (int j = 0; j < rsize; j++)
    {
        rightarray[j] = array[middle + 1 + j];
    }
    
    // initialize three counter variables to keep track of indices
    int i = 0, j = 0, k = first;

    // merge the two half arrays into the actual 'array'
    while (i < lsize && j < rsize)
    {
        if (leftarray[i] < rightarray[j])
        {
            array[k] = leftarray[i];
            i++;
        }
        else
        {
            array[k] = rightarray[j];
            j++;
        }
        k++;
    }

    // put the remaining elements (if any) of left array into 'array'
    while (i < lsize)
    {
        array[k] = leftarray[i];
        i++;
        k++;
    }

    // put the remaining elements (if any) of right array into 'array'
    while (j < rsize)
    {
        array[k] = rightarray[j];
        j++;
        k++;
    }
}


/**
 * Method that takes an array,
 * the indices of its first and last elements as arguments.
 * 
 * Sorts the array using Merge Sort algorithm
 * in O(log(n)) time.
 * 
 */
void merge_sort(int array[], int first, int last)
{
    int size = (last - first) + 1;
    int middle = (first + last) / 2;

    if (size == 1)
    {
        return ;
    }
    else
    {
        // sort the left half array
        merge_sort(array, first, middle);

        // sort the right half array
        merge_sort(array, middle + 1, last);

        // merge the two arrays
        merge(array, first, middle, last);
    }
}