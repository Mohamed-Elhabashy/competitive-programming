#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=1e7;

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
vector<ll> getDivisors(ll n)        //O(sqrt(n))
{
    vector<ll>v;
    ll i;
    for(i = 1 ; i < n/i ; ++i)
    {
        if(n%i == 0)
        {
            v.push_back(i);
            v.push_back(n/i);


        }
    }
    if(i == n/i && n%i==0)
    {
        v.push_back(n/i);

    }
    return v;
}
int main()
{
    int n=d();
    ll g=0;
    while(n--){
        ll x=lld();
        g=__gcd(g,x);
    }
    auto v=getDivisors(g);
    cout<<v.size();
}
