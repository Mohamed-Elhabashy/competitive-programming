#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


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
ll lcm(ll a,ll b){
    return a/__gcd(a,b) * b;
}
int main()
{
    ll n=lld(),a=lld(),b=lld(),p=lld(),q=lld(),num;
    ll n_p=n/a;
    ll n_q=n/b;
    if(lcm(a,b)<=n)
    num=n/lcm(a,b);
    else
    num=0;
    if(q>p){
        printf("%lld\n",(n_q*q)+((n_p-num)*p));
    }
    else
        printf("%lld\n",(n_p*p)+((n_q-num)*q));
}
