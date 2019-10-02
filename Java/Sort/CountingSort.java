/*
  COUNTING SORT
  Counting sort is a sorting technique based on keys between a specific range. It works by counting the number of objects having distinct key values. 
  Then doing some arithmetic to calculate the position of each object in the output sequence.
*/
class CountingSort 
{ 
    void sort(char arr[]) 
    { 
        int n = arr.length; 
  
        // This array stores the sorted array 
        char output[] = new char[n]; 
  
        // Freq array to stores count of inidividual 
        // characters and initialize count array as 0 
        int freq[] = new int[256]; 
        for (int i = 0 ; i < 256 ; ++i) 
            freq[i] = 0; 
  
        // store count of each character 
        for (int i = 0 ; i < n ; ++i) 
            freq[arr[i]]++; 
  
        // Change freq[i] so that freq[i] now contains actual 
        // position of this character in output array 
        for (int i = 1 ; i <= 255 ; ++i) 
            freq[i] += freq[i-1]; 
  
        // Build the output character array 
        // To make it stable we are operating in reverse order. 
        for (int i = n-1 ; i >= 0 ; i--) 
        { 
            output[freq[arr[i]]-1] = arr[i]; 
              freq[arr[i]]--; 
        } 
  
        // Copy the output array to arr, so that arr now 
        // contains sorted characters 
        for (int i = 0 ; i < n ; ++i) 
            arr[i] = output[i]; 
    } 
  
    // Main method 
    public static void main(String args[]) 
    { 
        CountingSort obj = new CountingSort(); 
        char arr[] = {'s','z','a','a','z','k','l','y',
                      'b','d','b','g','h','o','p','t','d','e'
                    }; 
        //For sorting arr
        obj.sort(arr); 
  
        System.out.print("Sorted character array is "); 
        for (int i=0; i<arr.length; ++i) 
            System.out.print(arr[i]); 
    } 
}
/*
OUTPUT
Sorted character array is aabbddeghklopstyzz
*/
