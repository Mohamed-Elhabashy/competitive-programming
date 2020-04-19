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
vector<int>adj[N];
int mx=0;
int dis[N];
void bfs(int src){

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
                mx=max(mx,dis[v]);
            }
        }
    }
}
int main()
{
    int n=d();
    set<int>s;
    for(int i=1;i<=n;i++){
        int x=d();
        if(x==-1)adj[i].push_back(i),s.insert(i);
        else {
        adj[x].push_back(i);
        adj[i].push_back(x);
        }
    }
    
    memset(dis,OO,sizeof dis);
    for(auto i : s){

        if(dis[i]==OO){
        bfs(i);
        }
    }

    printf("%d\n",mx+1);
}
