#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define U first
#define V second

const int N=1e6+4,OO = 0x3f3f3f3f;
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

vector<ll> getDivisors(ll n){
    vector<ll>ret;
    ll i;
    for(i=1;i<n/i;i++){
        if(n%i==0){
            ret.push_back(i);
            ret.push_back(n/i);
        }
    }
    if(i*i==n) ret.push_back(i);

    return ret;
}

int main()
{
    int a=d(),b=d();
    int x=__gcd(a,b);
    vector<ll>v;
    v=getDivisors(x);
    sort(v.begin(),v.end());
    int t=d();
    while(t--){
        bool flag=0;
        ll l=lld(),r=lld();
        for(ll i=v.size()-1;i>=0;i--){
            if(v[i]<=r && v[i]>=l){
                printf("%lld\n",v[i]);
                flag=1;
                break;
            }
        }
        if(flag==0)puts("-1");
    }
}
