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
        int x=d();
        if(x==1)
        puts("3");
        else if(x==2)
        puts("2");
        else{
            if(x%2==0){
                puts("0");
            }
            else{
                puts("1");
            }
        }
    }
}
