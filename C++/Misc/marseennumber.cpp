#include<math.h>
#include<iostream>

using namespace std;

int main()
{
	int n,i,p=0,flag=1;
	
	for(n=2;n<=10;n++)
	{
		flag=1;
		p=(pow(2,n))-1;
		for(i=2;i<=sqrt(p);i++)
		{
			if(p%i==0)
			{
				flag=0;
				break;
			}
		}
			if(flag==1)
			{
				cout<<p<<"\n";
			}
	}
	return 0;
}
