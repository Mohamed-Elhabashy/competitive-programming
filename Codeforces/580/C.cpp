#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e6,OO = 0x3f3f3f3f;
int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld", &ret);
    return ret;
}
bool cat[N];
vector<int>adj[N];
map<int,int>mp;
int dis[N];
int cntcat[N],m;
bool streat[N];
void bfs(int src){
    memset(dis,OO,sizeof dis);
    dis[src]=0;
    queue<int>q;
    q.push(src);
    if(cat[src]==1) cntcat[src]=1;
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int v:adj[u]){
            if(cat[v]==1 && cat[u]==1){
                cntcat[v]=cntcat[u]+1;
                if(cntcat[v]>m){
                    streat[v]=1;
                }
            }
            else if(cat[v]==1 && cat[u]==0){
                cntcat[v]=1;
                if(cntcat[v]>m){
                    streat[v]=1;
                }
            }
            else if(cat[v]==0)
                cntcat[v]=0;


            if(dis[v]==OO && streat[v]==0){
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
}
int main()
{
    int n=d();
    m=d();
    for(int i=1;i<=n;i++){
        int x=d();
        if(x==1)
        cat[i]=1;
        else
        cat[i]=0;
    }
    for(int i=0;i<n-1;i++){
        int u=d(),v=d();
        adj[u].push_back(v);
        adj[v].push_back(u);
        mp[u]++;
        mp[v]++;
    }
    bfs(1);
    int ans=0;
    for(auto mm:mp){
        if(mm.second==1 && dis[mm.first]!=OO && mm.first!=1)
            ans++;
    }
    printf("%d\n",ans);
}
