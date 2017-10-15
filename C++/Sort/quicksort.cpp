#include <iostream>
using namespace std;
int Parition(int array[], int left, int right)
{
    int pivot,index,temp,j;
    index = right;
    pivot = array[left];
    for(j = right; j > left; j--)
    {
        if(array[j] > pivot)
        {
            temp = array[j];
            array[j] = array[index];
            array[index] = temp;
            index--;
        }
    }
    array[left] = array[index];
    array[index] = pivot;
    return index;
}
void Quick(int array[], int left, int right)
{
    if(left < right)
    {
        int pivot = Parition(array, left, right);

        Quick(array, left, pivot - 1);
        Quick(array, pivot + 1, right);
    }
}
void printarray(int array[],int size)
{
    for(int i = 0; i < size; i++) // Printing the sorted array 
    cout << array[i] << " ";
    cout << endl;  

}

int main()
{
    int size,size1;
    
    //Test 1 
    
    // Test array does not have repeating element
    
    cout <<"Test 1\n";
    int array[]={56,79,0,90,-13,3,12,10,17,7};
    size=10;
    cout << "Original Elements: \n";
    printarray(array,size);
    Quick(array,0,size-1);
    cout << "sorted elements: \n";
    printarray(array,size);
    
    //Test 2 
    
    //Test array have repeating elements
    
    cout <<"Test 2\n";
    int array1[]={56,79,0,90,3,12,10,3,7,0};
    size1=10;
    cout << "Original Elements: \n";
    printarray(array1,size1);
    Quick(array1,0,size1-1);
    cout << "sorted elements: \n";
    printarray(array1,size1);
    return 0;
}