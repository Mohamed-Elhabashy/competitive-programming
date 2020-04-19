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
const long long N = 1e6,OO=0x3f3f3f3f;
bool factorize(ll n){

    for(ll p = 2 ; p <= n/p ; ++p){
        ll e = 0;
        while(n%p == 0){
            n /= p;
            ++e;
        }
        if(e)   return 1;
    }
    if(n > 1)   return 1;
     return 0;
}

int main()
{
    int t=d();
    while(t--){
        ll x=lld(),y=lld();
        ll ans=x-y;
        if(factorize(ans))
        puts("YES");
        else
        puts("NO");
    }
}
