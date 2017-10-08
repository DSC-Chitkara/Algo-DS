#include <stdio.h>

// check if p is a prime
int isPrime(int k)
{
    int i;
    if(k == 1)
        return 0;
    for(i = 2; i <= k / 2; i++)
        if(k % i == 0)
            return 0;
    return 1;
}

//power of a number
int power(int a,int k)
{
   a=2;
   int pow=1;
   int i;
   for(i=1; i<=k; i++)
        pow=pow*2;
   return pow;
}

int main()
{
    int n;
    do
    {
        printf("n = ");
        scanf("%d",&n);
    }while(n<1);

    //all mersenne primes smaller than n

	int temp = n;

	int i, mp;
	for (i = 1; i < n; i++)
	{
		if(isPrime(i))
		{
			mp = power(2, i) - 1;
			if (mp > n)
				break;
			else
				printf("%d\n", mp);
		}
	}
    return 0;
}
