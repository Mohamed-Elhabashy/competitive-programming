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


int main()
{
    int t=d();
    while(t--){
        int l1=d(),r1=d();
        int l2=d(),r2=d();

        if(l1==l2)
        printf("%d %d\n",l1,r2);
        else
        printf("%d %d\n",l1,l2);
    }
}
