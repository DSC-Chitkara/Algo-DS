#include<iostream>
using namespace std;
void main()
{
int i,n,x=0,y=1,z;
clrscr();
cout<<"Enter nubmer of terms for Fibonacci Series: ";
cin>>n;
cout<<"Fibonacci series are: \n";
for(i=0; i<n; i++)
{
cout<<endl<<x;
z=x+y;
x=y;
y=z;
}
return 0;
}
