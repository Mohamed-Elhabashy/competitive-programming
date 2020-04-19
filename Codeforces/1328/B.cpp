#include<bits/stdc++.h>
using namespace std;

const int N=1e6+30;
typedef long long ll;

ll t,n,k;
ll bs(ll idx){
    ll l=1,hi=2e9,mid;
    while(l<hi){
        mid=(l+hi+1)/2;
        //cout<<l<<" "<<hi<<" "<<mid<<endl;
        ll ans=(mid*(mid+1))/2;
        if(ans>=idx && idx>=(ans-mid+1)){
            return mid;
        }
        if(idx>=ans)l=mid;
        else hi=mid-1;
    }
}
void solve(){
    ll ans=bs(k);
    //cout<<ans<<endl;
    ll en=(ans*(ans+1))/2;
    ll st=en-ans+1;
    ll b1=n-ans;
    ll b2=n-(k-st);
    if(k==1){
              b1=n;b2=n-1;
    }
    for(int i=1;i<=n;i++){
        if(i==b1 || i==b2)cout<<"b";
        else cout<<"a";
    }
    cout<<endl;


}
int main()
{
    cin>>t;
    while(t--){
        cin>>n>>k;
        solve();
    }
}
