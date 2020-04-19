#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7;
vector<int>adj[N];
int n,k,OO=0x3f3f3f3f;
int dis[N];
void bfs(int src){
    memset(dis,OO,sizeof dis);
    dis[src]=0;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(auto v:adj[u]){
            if(dis[v]==OO){
                dis[v]=dis[u]+1;
                q.push(v);
            }
        }
    }
}
int vis[N];
int cm[N];
void dfs(int u){
    vis[u]=1;
    for(int v:adj[u]){
        if(!vis[v]){
            dfs(v);
            cm[u]+=cm[v];
        }

    }
    cm[u]++;

}
int main()
{
    scanf("%d %d",&n,&k);
    for(int i=1; i<n; i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    bfs(1);
    dfs(1);

    vector<int>ans;
    for(int i=1;i<=n;i++){
        ans.push_back(dis[i]-(cm[i]-1));
    }
    sort(ans.begin(),ans.end());
    long long sum=0;
    for(int i=ans.size()-1;i>=0&&k;i--){
        sum+=ans[i];
        k--;
    }
    cout<<sum<<endl;


}
