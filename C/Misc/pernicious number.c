#include<stdio.h>

int binary(int num)
{
	int rem,base=1,binary=0;
	while(num>0)
	{
		rem=num%2;
		binary=binary+rem*base;
		num=num/2;
		base=base*10;
	}
	
	return binary;
}
int ones(int binary)
{
	int count;
	while(binary!=0)
	{		
		if((binary%10)==1)
		{
			count++;
		}
		binary=binary/10;
	}
	return count;
}

int main()
{
	int num,i,f=0,o,d;
	scanf("%d",&num);
	d=binary(num);
	o=ones(d);
	for(i=2;i<=(o/2);i++)
	{
	  if(o%i==0)
	  {
	  	f=1;
	  } 
	break;
	}
	if(f!=1 && num!=1)
	{
	printf("%d is a pernicious number\n",num);	
	}else if(f=1)
	{
		printf("%d is not pernicious",num);
	}
	return 0;
}
