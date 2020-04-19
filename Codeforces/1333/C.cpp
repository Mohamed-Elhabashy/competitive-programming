#include<bits/stdc++.h>
using namespace std;

const int N=2e5 +10;
typedef long long ll;
ll n,arr[N],cm[N];
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        cm[i]=cm[i-1]+arr[i];
    }
    map<ll,ll>mp;
    mp[0]=0;
    ll ans=0;
    ll last=-1;
    for(int i=1;i<=n;i++){
        if(mp.count(cm[i]))
            last=max(last,mp[cm[i]]);
        ans+=i-last-1;
        mp[cm[i]]=i;
    }
    cout<<ans<<endl;

}
