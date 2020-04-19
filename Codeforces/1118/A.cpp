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
const long long N = 1e5+20,OO=0x3f3f3f3f;
int t;
int main()
{
    t=d();
    while(t--){
        ll l=lld(),one=lld(),two=lld();
        ll ans1=l*one;
        ll ans2;
        if(l%2==0)
                ans2=(l/2)*two ;
        else
                ans2=((l/2) *two) +one;
        printf("%lld\n",min(ans1,ans2));
    }

}
