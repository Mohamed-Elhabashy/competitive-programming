#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
ll lld()
{
    ll ret;
    scanf("%lld", &ret);
    return ret;
}
const int N = 1e6+5;
map<ll,ll>mp;
bitset<N>is_prime;
void sieve(){

    is_prime.set();
    is_prime[0]=is_prime[1]=0;
    for(ll i=2;i<N;i++){
        if(is_prime[i])
        for(ll j=i*i;j<N;j+=i)
            is_prime[j]=0;
    }
}
vector<ll>v;
void solve(){
    for(ll i=0;i<N;i++){
        if(is_prime[i])
            v.push_back(i*i);
    }
}
int main()
{
    sieve();
    solve();
    int n=d();
    for(int i=0;i<n;i++){
        ll x=lld();
        if(binary_search(v.begin(),v.end(),x))cout<<"YES\n";
        else cout<<"NO\n";
    }
}
