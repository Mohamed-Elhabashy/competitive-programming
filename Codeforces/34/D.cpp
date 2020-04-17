#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6,OO=0x3f3f3f3f;
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
vector<int>adj[N];
int par[N];
int dis[N];
void bfs(int src){
    memset(dis,OO,sizeof dis);
    dis[src]=0;
    par[src]=src;
    queue<int> q;
    q.push(src);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(dis[v]==OO){
                dis[v]=dis[u]+1;
                par[v]=u;
                q.push(v);
            }
        }
    }
}
int main(){
    int n=d(),r1=d(),r2=d();
    for(int i=1;i<=n;i++){
        if(i==r1)
        continue;
        int p=d();
        adj[i].push_back(p);
        adj[p].push_back(i);
    }
    bfs(r2);
    for(int i=1;i<=n;i++){
        if(i==r2)
        continue;
        cout<<par[i]<<" ";
    }
}
