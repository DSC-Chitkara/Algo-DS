#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &a[i]);
	}
	for (int i = 1; i < n; ++i)
	{
		int x = a[i];
		int hole = i;
		while(hole > 0 && a[hole-1] > x)
		{
			a[hole] = a[hole-1];
			
			hole--;
		}
		a[hole] = x;
	}
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", a[i]);
	}
	printf("\nWanna Find A Number?: ");
	int num, s, mid, l, f;
	scanf("%d",&num);
	s = 0;
	l = n-1;
	mid = (s+l)/2;
	while(s <= l)
	{
		if (a[mid] == num)
		{
			printf("\nFound At %d\n", mid);
			break;
		}
		else if (a[mid] > num)
		{
			l = mid-1;
		}
		else
			s = mid+1;
		mid = (s+l)/2;
	}
	if (s > l)
	{
		printf("\nNot Found");
	}
	
	return 0;
}