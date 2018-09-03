#include<stdio.h>
#include<math.h>

int main()
{
	long int num,i=0,decimal=0,rem;
	
	printf("Enter The Octal Integer\n");
	scanf("%ld",&num);
	
	while(num>0)
	{
		rem=num%10;
		decimal=decimal+rem*pow(8,i);
		num=num/10;
		i++;
	}
	printf("The decimal equivalent is %ld",decimal);
	return 0;
}
