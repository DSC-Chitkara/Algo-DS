#include<iostream>
using namespace std;
#define maxSize 100;

int main()

    int arr[maxSize] , element , mid , start , end ;
    int arrSize , i , j , temp ;
    mid = start = end = 0;
    
    cout << " \n Enter size of array : " ;
    cin >> arrSize ;
    
    cout << " \n Enter elements of array: " ;
    for ( i = 0 ; i < n ; i++ ){

        cin >> arr[i] ;
    }
    
    // SORTING ARRAY 
    for ( i = 0 ; i < arrSize ; i++ ) {
 
        for ( j = 0 ; j < arrSize-i ; j++) {

            if ( arr[ j ] > arr[ j+1 ] ) {
                
                temp = arr[ j ] ;
                arr[ j ] = arr[ j+1 ];
                arr[ j+1 ] = temp;
            }
        }
    }

    cout << " \n Sorted array : " << endl ;
    
    for ( i = 0 ; i < arrSize ; i++ ) {
  
        cout << arr[ i ] << " " << endl ;
    }

    end  = arrSize-1 ;

    cout << " \n Enter an element to be searched : " ;
    cin >> element ;

    mid = ( start + end ) / 2 ;

    while ( start < end  &&  arr[ mid ] ! = element ) {
        if ( element > arr[ mid ] ) {
            start = mid+1;
        }
        else {
            end = mid - 1 ;
        }
        mid = ( start + end ) / 2 ;
    }

    if ( arr[ mid ] == element ) {
        cout << " \n Element " << arr[ mid ] << " found at " << mid+1 << " position " << endl ;
    }
    else {
        cout << " \n Element not found " << endl ;
    }
 
     return 0;
}
