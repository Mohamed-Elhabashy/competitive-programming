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
set<int>adj[N];
int main(){
    int n=d(),m=d();
    while(m--){
        int u=d(),v=d();
        adj[u].insert(v);
        adj[v].insert(u);
    }
    int ans=0;
    int cnt=1;
    while(true){
        vector<int>temp;
        for(int i=1;i<=n;i++)
            if(adj[i].size()==1)
                temp.push_back(i);


        for(int i=0;i<temp.size();i++){

            adj[*adj[temp[i]].begin()].erase(temp[i]);
            adj[temp[i]].clear();
        }
        if(temp.size())
        ans++;
        else
        break;
    }
    printf("%d\n",ans);
}
