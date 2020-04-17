#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6,OO=1e18;
vector<pair<long long,long long>>adj[N];
long long dis[N];
long long par[N];
void dijkstra(){
    for(int i=2;i<N;i++)dis[i]=OO;
    priority_queue<pair<long long,long long>>q;
    q.push({1,0});
    while(!q.empty()){
        long long u=q.top().first;
        long long uc=-q.top().second;
        q.pop();

        if(dis[u]!=uc) continue;
        for(auto neigh :adj[u]){
            long long c=neigh.first;
            long long v=neigh.second;
            if(dis[v]>dis[u]+c){
                dis[v]=dis[u]+c;
                q.push({v,-dis[v]});
                par[v]=u;
            }
        }
    }
}
int main()
{
    long long n,m;
    scanf("%lld %lld",&n,&m);
    for(int i=0;i<m;i++){
        long long u,v,c;
        scanf("%lld %lld %lld",&u,&v,&c);
        adj[u].push_back({c,v});
        adj[v].push_back({c,u});
    }
    dijkstra();
    if(dis[n]==OO){
        puts("-1");
        return 0;
    }
    vector<long long>ans;
    ans.push_back(n);
    long long p=n;
    while(par[p]!=1){
        ans.push_back(par[p]);
        p=par[p];
    }
    ans.push_back(1);
    for(int i=ans.size()-1;i>=0;i--)
        printf("%lld ",ans[i]);
}
