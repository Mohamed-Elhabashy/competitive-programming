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
const int N=1e4;
string arr;
int frq[26];
int main()
{
    //freopen("window.in","r",stdin);
    int t;
    cin>>t;
    while(t--)
    {
        ll x=lld(),y=lld(),z=lld();
        printf("%lld\n",(x+y+z)/2);
    }
}
