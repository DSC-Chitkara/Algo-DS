#include<iostream>
using namespace std;
int main()
{
 long num1,num2;
    int i=0, r=0, sum[10];

    cout<<"first binary number";
    cin>>num1;
    cout<<"second binary number";
    cin>>num2;
    while (num1 != 0 || num2 != 0)
    {
        sum[i++] =(num1 % 10 + num2 % 10 + r) % 2;
        r =(num1 % 10 + num2 % 10 + r) / 2;
        num1 = num1 / 10;
        num2 = num2 / 10;
    }
    if (r != 0)
        sum[i++] = r;
    --i;
    cout<<"Sum of two binary numbers";
    while (i >= 0)
        cout<<sum[i--];
return 0;
}
