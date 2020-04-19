#include <bits/stdc++.h>
using namespace std ;
#define ll long long
int d()
{
    int t ;
    scanf( "%d", &t ) ;
    return t ;
}
ll lld()
{
    ll t ;
    scanf( "%lld", &t ) ;
    return t ;
}
const long long N = 400,OO=0x3f3f3f3f,mod=1e9+7;
int arr[N][N];
ll pow(ll a,ll b,ll mod){
    if(!b)return 1;
    ll ans=pow(a,b>>1,mod)%mod;
    return ((ans*ans)%mod * ((b&1 ? a:1) %mod))%mod;
}
int main()
{
    ll n=lld(),m=lld();
    ll ans=pow(2,m,mod)-1;
    ans=pow(ans,n,mod);
    cout<<ans<<endl;
}
