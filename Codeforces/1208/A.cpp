#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N= 1000000+2,OO = 0x3f3f3f3f;
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
vector<ll> getDivisors(ll n){       //O(sqrt(n))
    vector<ll> ret;
    ll i;
    for(i = 1 ; i < n/i ; ++i){
        if(n%i == 0){
            ret.push_back(i);
            ret.push_back(n/i);
        }
    }
    if(i*i == n)    ret.push_back(i);
    return ret;
}
ll lcm(ll a,ll b)
{
    return a/__gcd(a,b) * b;
}
map<pair<int,int>,int>mp;

vector<pair<ll, ll>> factorize(ll n){
    vector<pair<ll, ll> > ret;
    for(ll p = 2 ; p <= n/p ; ++p){
        int e = 0;
        while(n%p == 0){
            n /= p;
            ++e;
        }
        if(e)   ret.push_back({p, e});
    }
    if(n > 1)   ret.push_back({n, 1});
    return ret;
}

int main()
{
    int t=d();
    while(t--){
        ll a=lld(),b=lld(),n=lld();
        ll x=a^b;
        if(n==0)
            printf("%lld\n",a);
        else if(n==1)
            printf("%lld\n",b);
        else if(n==2)
            printf("%lld\n",x);
        else{
            if(n%3==0)
                printf("%lld\n",a);
            else if(n%3==1)
                printf("%lld\n",b);
            else
                printf("%lld\n",x);
        }
    }
}
