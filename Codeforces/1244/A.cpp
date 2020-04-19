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
        int a=d(),b=d(),c=d(),z=d(),k=d(),x,y;
        if(a%c!=0)
        x=a/c +1;
        else
        x=a/c;
        if(b%z!=0)
        y=b/z +1;
        else
        y=b/z;
        if(x+y<=k)
        printf("%d %d\n",x,y);
        else
        puts("-1");
    }
}
