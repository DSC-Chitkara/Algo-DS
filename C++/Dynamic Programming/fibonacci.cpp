//Fibonacci Series using Dynamic Programming 
#include<stdio.h> 

//space complexity: O(n)
//time complexity: O(n)
int fib(int n) 
{ 
	/* Declare an array to store Fibonacci numbers. */
	int f[n+2]; // 1 extra to handle case, n = 0 
	int i; 

	/* 0th and 1st number of the series are 0 and 1*/
	f[0] = 0; 
	f[1] = 1; 

	for (i = 2; i <= n; i++) 
	{ 
		/* Add the previous 2 numbers in the series 
			and store it */
		f[i] = f[i-1] + f[i-2]; 
	} 

	return f[n]; 
} 

//SPACE OPTIMIZED FUNCTION TO FIND FIBONACCI NUMBER
//space complexity: O(n)
//time complexity: O(n)
int fib_optim(int n) 
{ 
  int a = 0, b = 1, c, i; 
  if( n == 0) 
    return a; 
  for (i = 2; i <= n; i++) 
  { 
     c = a + b; 
     a = b; 
     b = c; 
  } 
  return b; 
} 

int main () 
{ 
	int n = 9; 
	printf("%d", fib(n)); 
	getchar(); 
	return 0; 
} 
