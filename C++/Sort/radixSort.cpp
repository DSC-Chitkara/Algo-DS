#include<iostream>
using namespace std;
void countSort(int array[], int size, int place) {
    int range=10;
    int frequency[range] = {0};
    int output[size];
    for(int i=0;i<size;i++)
        frequency[(array[i]/place)%range]++;
    for(int i=0;i<range;i++)
        frequency[i]+=frequency[i-1];
    for(int i=size-1;i>=0;i--) {
        output[frequency[(array[i]/place)%range]-1]=array[i];
        frequency[(array[i]/place)%range]--;
    }
    for(int i=0;i<size;i++)
        array[i]=output[i];
}
void radixSort(int array[], int size, int maxElement) {
    int temp=1;
    while(maxElement) {
        countSort(array, size, temp);
        temp*=10;
        maxElement/=10;
    }
    for(int i=0;i<size;i++)
        cout<<array[i]<<"\t";
    cout<<endl;
}
int main(){
    int size;
    int maxElement=0;
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
        if(array[i]>maxElement)
           maxElement=array[i];
    }
    radixSort(array,size, maxElement);
    cout<<endl;
    return 0;
}
