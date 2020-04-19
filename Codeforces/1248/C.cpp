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
const long long N = 1e5+20,OO=0x3f3f3f3f,mod=1e9+7;
int fib[N];
void solve(){
    fib[0]=1;
    fib[1]=1;
    for(int i=2;i<N;i++)
        fib[i]=(fib[i-1]+fib[i-2])%mod;

}
int main()
{
    int n=d(),m=d();
    solve();
    printf("%lld\n",2LL*(fib[n]+fib[m]-1)%mod);
}
