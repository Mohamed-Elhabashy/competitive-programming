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
const long long N = 2e5+20,OO=0x3f3f3f3f,mod=1e9+7;
ll lcm(ll a,ll b){
    return (a*b)/__gcd(a,b);
}
int main()
{
   int t=d();
   while(t--){
        int a=d(),b=d();
        if(__gcd(a,b)==1)puts("Finite");
        else puts("Infinite");
   }
}

