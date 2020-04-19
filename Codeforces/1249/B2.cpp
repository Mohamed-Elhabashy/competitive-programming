#include <bits/stdc++.h>
using namespace std ;
#define ll long long
int d()
{
    int t ;
    scanf( "%d", &t ) ;
    return t ;
}
ll lld()
{
    ll t ;
    scanf( "%lld", &t ) ;
    return t ;
}
const long long N = 2e5+20,OO=0x3f3f3f3f,mod=1e9+7;
vector<int>adj[N];
int cnt=0;
int vis[N];
map<int,int>mp;
vector<int>ans;
void dfs(int u){
    ans.push_back(u);
    vis[u]=1;
    cnt++;
    for(auto v:adj[u])
    if(!vis[v])dfs(v);
}
int main()
{
    int t=d();
    while(t--){
        int n=d();
        mp.clear();
        for(int i=0;i<N;i++)adj[i].clear();
        memset(vis,0,sizeof vis);
        for(int i=1;i<=n;i++){
            int x=d();
            adj[i].push_back(x);
        }
        for(int i=1;i<=n;i++){

            if(!vis[i]){
                cnt=0;
                ans.clear();
                dfs(i);
                for(auto v:ans)
                mp[v]=cnt;

            }
        }
        for(int i=1;i<=n;i++)
        cout<<mp[i]<<" ";
        cout<<"\n";

    }
}
