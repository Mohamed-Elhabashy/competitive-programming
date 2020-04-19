#include<bits/stdc++.h>
using namespace std;

const int N=1e6+30;
typedef long long ll;

int n,q,x;int ans;
map<int,int>mp;
void solve(){
    for(int i=31;i>=0 && x;i--){
        ll a=pow(2,i);
        if(!mp[a] || a>x)continue;
        int y=x/a;
        x-=min(mp[a],y)*a;
        ans+=min(mp[a],y);

    }
    if(!x)cout<<ans<<endl;
    else cout<<-1<<endl;
}
int main()
{
    cin>>n>>q;
    for(int i=0;i<n;i++){
        cin>>x;
        mp[x]++;
    }
    while(q--){
        ans=0;
        cin>>x;
        solve();
    }
}
