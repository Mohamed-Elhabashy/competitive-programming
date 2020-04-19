#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=1e6;
const ll NN=1e18;

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
ll n,m,OO = INT_MAX;
vector<pair<ll,ll>>adj[N];
long long dis[N];
ll parent[N];
void dijkstra(int src){
    fill(dis,dis+N,NN);
    dis[src]=0;
    priority_queue<pair<ll ,ll>>q;
    q.push({0,src});
    parent[0]=0;
    while(!q.empty()){
        ll uc=-q.top().first;
        ll u=q.top().second;
        q.pop();
        if(uc!=dis[u])  continue;
        for(pair<int,int> p : adj[u]){
            ll c=p.first;
            ll v=p.second;
            if(dis[v]> dis[u]+c){
                dis[v]=dis[u]+c;
                q.push({-dis[v],v});
                parent[v]=u;
            }

        }

    }
}
int main()
{
  int n , m , a , flag = false;
  vector<int >vec;
  cin >> n ;
  set<int>A;
  for(int i = 0 ; i < n ; ++i ){
  cin >> a ;
    A.insert(a) ;
    }
     cin >> m ;
set<int>B;
  for(int i = 0 ; i < m ; ++i ){
  cin >> a ;
   B.insert(a );
   }
     for(auto i = A.begin() ; i != A.end() ; ++i ){
             for(auto j = B.begin() ; j != B.end() ; ++j ){
              int v = *i + *j ;
           if((A.find(v) == A.end()) && (B.find(v) == B.end())){
             vec.push_back(*i);
             vec.push_back(*j);
              flag = true;
              break ;
             }
             }
             if(flag == true)
               break ;
               }
        for(int i = 0 ; i < vec.size(); ++i)
          cout << vec[i] << " " ;
        }
