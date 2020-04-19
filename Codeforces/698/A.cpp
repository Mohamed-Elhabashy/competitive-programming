#include<bits/stdc++.h>
using namespace std;

const int N=1e6+30;
typedef long long ll;
int n,arr[200];
int dp[200][5];
int solve(int i,int last)
{
    if(i==n)
        return 0;
    int &ret=dp[i][last];
    if(~ret)return ret;
    if(arr[i]==0)
    {
        return ret=1+solve(i+1,0);
    }
    else if(last==1)
    {
        if(arr[i]==1)
            return ret=1+solve(i+1,0);
        int ch1=1e9,ch2=1e9;
        if(arr[i]==2)
        {
            ch1=solve(i+1,2);
            ch2=1+solve(i+1,0);
            return ret=min(ch1,ch2);
        }
        if(arr[i]==3)
        {
            ch1=solve(i+1,2);
            ch2=1+solve(i+1,0);
            return ret=min(ch1,ch2);
        }
    }
    else if(last==2)
    {

        int ch1=1e9,ch2=1e9;
        if(arr[i]==1)
        {
            ch1=solve(i+1,1);
            ch2=1+solve(i+1,0);
            return ret=min(ch1,ch2);
        }
        if(arr[i]==2)
        {
            return ret=1+solve(i+1,0);
        }
        if(arr[i]==3)
        {
            ch1=solve(i+1,1);
            ch2=1+solve(i+1,0);
            return ret=min(ch1,ch2);
        }
    }
    else
    {

        int ch1=1e9,ch2=1e9,ch3=1e9;
        if(arr[i]==1)
        {
            ch1=solve(i+1,1);
            ch2=1+solve(i+1,0);
            return ret=min(ch1,ch2);
        }
        if(arr[i]==2)
        {
            ch1=solve(i+1,2);
            ch2=1+solve(i+1,0);
            return ret=min(ch1,ch2);
        }
        if(arr[i]==3)
        {
            ch1=solve(i+1,1);
            ch2=solve(i+1,2);
            ch3=1+solve(i+1,0);
            return ret=min(ch1,min(ch2,ch3));
        }
    }


}
int main()
{
    cin>>n;
    memset(dp,-1,sizeof dp);
    for(int i=0; i<n; i++)
        cin>>arr[i];
    cout<<solve(0,3)<<endl;
}
