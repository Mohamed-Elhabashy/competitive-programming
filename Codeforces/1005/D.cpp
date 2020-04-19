#include<bits/stdc++.h>
using namespace std;

const int N=2e5+30;
typedef long long ll;
string s;
int dp[N][5][4];

int solve(int i,int mod,int last){
    mod%=3;

    if(i==s.length()){
        if(mod==0 && last)return 1;
        else
        return 0;
    }
    int &ret=dp[i][mod][last];
    if(~ret)return ret;

    int ch1=solve(i+1,mod+(s[i]-'0'),1);

    int ch2=0;
    if(mod==0 && last==1)ch2=1+solve(i+1,s[i]-'0',1);
    else ch2=solve(i+1,s[i]-'0',1);

    int ch3=solve(i+1,0,0);
    return ret=max(ch1,max(ch2,ch3));
}
int main()
{
    cin>>s;
    memset(dp,-1,sizeof dp);
    cout<<solve(0,0,0);
}
