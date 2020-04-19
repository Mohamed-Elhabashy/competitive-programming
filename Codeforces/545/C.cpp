#include<bits/stdc++.h>
using namespace std;

const int N=1e5+30;
typedef long long ll;
int n,t,h;
vector<pair<int,int>>v;

ll r=-1e10;
int dp[N][6];
int solve(int i,int last)
{
    if(i>=n-1)
        return 0;
    int &ret=dp[i][last];
    if(~ret)return ret;
    int ch1=0,ch2=0,ch3=0;
    if(last==0 || last==1)
    {
        if(v[i].first-v[i].second>v[i-1].first)
        {
            ch1=1+solve(i+1,1);

        }
        if(v[i].first+v[i].second<v[i+1].first){
            ch2=1+solve(i+1,2);
        }
        ch3=solve(i+1,0);
    }
    else if(last==2){
        if(v[i].first-v[i].second>v[i-1].first+v[i-1].second)
        {
            ch1=1+solve(i+1,1);

        }
        if(v[i].first+v[i].second<v[i+1].first && v[i].first>v[i-1].first+v[i-1].second){
            ch2=1+solve(i+1,2);
        }
        ch3=solve(i+1,0);
    }
    return ret=max(ch1,max(ch2,ch3));

}
int main()
{
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d %d",&t,&h);
        v.push_back({t,h});
    }
    sort(v.begin(),v.end());
    memset(dp,-1,sizeof dp);
    if(n==1)cout<<1<<endl;
    else
    cout<<2+solve(1,1)<<endl;
}
