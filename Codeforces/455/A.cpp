#include<bits/stdc++.h>
using namespace std;

const int N=1e5+30;
typedef long long ll;

int n,arr[N];
map<ll,ll>mp;
ll x,dp[N+2];
ll getmx(int num){
    return num*mp[num];
}

ll solve(int i)
{
    if(i<=0)return 0;
    if(dp[i]!=-1)return dp[i];
    ll ch1=getmx(i)+solve(i-2);
    ll ch2=solve(i-1);
    return dp[i]=max(ch1,ch2);
}
int main()
{
    cin>>n;
    int mx=-1;
    memset(dp,-1,sizeof dp);
    for(int i=0; i<n; i++)
    {
        cin>>x;
        mp[x]++;
    }
    cout<<solve(100000)<<endl;
}
