#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
ll n,m;
ll arr1[N];
ll arr2[N];

bool isok(ll r){
    for(ll i=0;i<n;i++){
        ll dis=lower_bound(arr2,arr2+m,arr1[i])-arr2;
        if(dis==m){
            ll x=abs(arr1[i]-arr2[m-1]);
            if(x>r)return 0;
        }
        else if(dis==0){
            ll x=abs(arr2[0]-arr1[i]);
            if(x>r)return 0;
        }
        else{
            ll x=abs(arr2[dis]-arr1[i]);
            x=min(x,abs(arr1[i]-arr2[dis-1]));
            if(x>r)return 0;
        }

    }
    return 1;
}
ll bs(){
    ll l=0,h=1e12,mid;

    while(l<h){
        mid=(l+h)/2;
        if(isok(mid))
            h=mid;
        else
            l=mid+1;

    }
    return l;
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)cin>>arr1[i];
    for(int i=0;i<m;i++)cin>>arr2[i];
    cout<<bs()<<endl;
}