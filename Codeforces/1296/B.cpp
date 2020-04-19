#include <bits/stdc++.h>
using namespace std ;
typedef long long ll ;
int n ;
void solve ()
{
    scanf ("%d" , &n) ;
    ll ans =0 ;
    while(n > 9)
    {
        ll rem = 1LL*10 * (n/10);
        ans += rem ;
        n-=rem;
        n+=(rem/10);
    }
    ans+=n;
    printf ("%lld\n" ,ans );
}
int main()
{
    int t ;
    scanf ("%d" , &t );
    while (t--)
    {

        solve();
    }
    return 0;
}
