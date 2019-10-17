#include<stdio.h>
#include<conio.h>
#include<math.h>

void todecimal()
{
      int d=0,rem,hex,cop;
      int count=0;
      printf("Enter a Hexadecimal Number:");
      scanf("%d",&hex);
      cop=hex;
      while(hex > 0)
      {
            rem = hex % 10;
            d = d + rem * pow(16, count);
            hex = hex / 10;
            count++;
      }
      printf("\nDecimal Equivalent of %d is %d\n",cop,d);
}

void tohexa()
{
	int rem,ans=0,n,rev=0,r,m;
	printf("\n Enter any no. in decimal = ");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		rem=n%16;
		ans=(ans*10)+rem;
		n=n/16;
	}
	while(ans>0)
	{
		r=ans%10;
		rev=(rev*10)+r;
		ans=ans/10;
	}

	printf("\nHexdecimal Equivalent of %d is %d\n",m,rev);
}

void main()
{
    int a;
    printf("Enter the option\n\t1.convert hexadecimal to decimal equivalent\n\t2.convert decimal to hexadecimal\n");
    scanf("%d",&a);
    if(a==1)
    {
        todecimal();
    }
    else if(a==2)
    {
        tohexa();
    }
    else
        printf("Y enter wrong option");
    getch();	
}
