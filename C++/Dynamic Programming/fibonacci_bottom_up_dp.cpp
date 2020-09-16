#include <iostream>
using namespace std;
int fib(int n,int dp[])
{
    //top down make a array for overlapping subproblems
    //recursion+memoisation
    if(n==0 or n==1)
    {
        return n;
    }
    if(dp[n]!=0)
    {
        return dp[n];
    }
    int ans;
    ans=fib(n-1,dp)+fib(n-2,dp);
    return dp[n]=ans;
}
int fibo_bottom_up(int n)
{
    int dp[100]={0};
    dp[1]=1;
    for(int i=2;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
    }
    return dp[n];
}
int main(int argc, char **argv)
{
    int n;
    cin>>n;
	//int dp[100]={0};
    //cout<<fib(n,dp)<<endl;
    cout<<fibo_bottom_up(n);
	return 0;
}
