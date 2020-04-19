#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int s,n;
vector<pair<int,int>>v;

void solve(){
    for(int i=0;i<v.size();i++){
        int f=v[i].first;
        if(s>f){
            s+=v[i].second;
        }
        else{
            cout<<"NO\n";
            return ;
        }
    }
    cout<<"YES\n";
}
int main()
{
    cin>>s>>n;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    solve();
}
