//Header files
#include <stdio.h>//header input output files
#include <stdlib.h>//header library
//function defination
int fabonacci(int );

//main function

int main() {
    int N;
    printf("Enter the no of terms: ");
    scanf("%d",&N);
    fabonacci(N); //function call
    return 0;
}

//function body

int fabonacci(int M) {
    int *list = (int*)malloc((M+1)*sizeof(int));
    list[0] = 0;
    list[1] = 1;
    printf("Fabonacci series is:\n%d\n%d",list[0], list[1]);
    //for loop to find all fabonnaci number
    for (i=2;i<M;i++) {
      list[i] = list[i-1] + list[i-2];
      printf("\n%d", list[i]);
    }
    return 0;
}
