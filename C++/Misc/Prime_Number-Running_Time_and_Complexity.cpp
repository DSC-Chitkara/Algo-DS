#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int prime(int n)
{
    if(n<2)
    return 0;
    int f=1;
    int x=sqrt(n);
    for(int i=2;i<=x;i++)
    {
        if(n%i==0)
        {
            f=0;break;
        }
    }
    if(f==0)
    return 0;
    else
    return 1;
}

int main() {
    int n;cin>>n;
    while(n--)
    {
        int num;
        cin>>num;
        if(prime(num))
        cout<<"Prime"<<endl;
        else
        cout<<"Not prime"<<endl;
    }
    return 0;
}
