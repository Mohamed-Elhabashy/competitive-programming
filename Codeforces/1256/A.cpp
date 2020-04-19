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
char ans[200];

int main()
{
    int t=d();
    while(t--){
        int a=d(),b=d(),n=d(),s=d();
        int ans=s/n;
        ans=min(ans,a);
        ans*=n;
        ans=s-ans;
        if(ans>=0 && ans<=b)puts("YES");
        else puts("NO");
    }
}
