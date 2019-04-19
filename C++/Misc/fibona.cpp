#include<iostream>
using namespace std;
int main()
{
int n,a,b,sum=0;
cout<<"Enter the numbers to start with:";
cin>>a;
cin>>b;
cout<<"Enter n:";
cin>>n;
for(int i=0;i<n;i++)
{
cout<<a<<endl;
sum=a+b;
a=b;
b=sum;
}
}
