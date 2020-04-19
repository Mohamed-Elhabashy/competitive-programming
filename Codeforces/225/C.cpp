#include<bits/stdc++.h>
using namespace std;

const int N=1000 +10;
typedef long long ll;
int r,c,x,y;
char arr[N][N];
int w[N];
int b[N];
int dp[N][5][N];
int solve(int i,int last,int neigh)
{
    if(neigh>y)
    {
        return 1e9;
    }
    if(i==c)
    {
        if(neigh<x)
            return 1e9;
        return 0;
    }

    int &ret=dp[i][last][neigh];
    if(~ret)
        return ret;

    int ch1=INT_MAX,ch2=INT_MAX;
    if(neigh>=x)
    {

        if(last==1)
        {
            ch1=b[i]+solve(i+1,1,neigh+1);
            ch2=w[i]+solve(i+1,2,1);
        }
        else
        {
            ch1=w[i]+solve(i+1,2,neigh+1);
            ch2=b[i]+solve(i+1,1,1);
        }
        return ret=min(ch1,ch2);
    }
    if(neigh<x)
    {
        if(last==1)
        {

            ch1=b[i]+solve(i+1,1,neigh+1);
        }
        else
        {
            ch1=w[i]+solve(i+1,2,neigh+1);
        }
        return ret=ch1;
    }

}
int main()
{
    cin>>r>>c>>x>>y;
    for(int i=0; i<r; i++)
        cin>>arr[i];
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
            if(arr[j][i]=='.')
                w[i]++;
            else
                b[i]++;
    }
    memset(dp,-1,sizeof dp);
    int ch1=b[0]+solve(1,1,1);
    memset(dp,-1,sizeof dp);
    int ch2=w[0]+solve(1,2,1);

    cout<<min(ch1,ch2)<<endl;
}
