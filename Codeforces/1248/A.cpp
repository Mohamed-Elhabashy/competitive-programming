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
ll odd1,odd2;
ll even1,even2;
int main()
{
    int t=d();
    while(t--){
        odd1=odd2=even1=even2=0;
        int n=d();
        for(int i=0;i<n;i++){
            int x=d();
            if(x&1)odd1++;
            else even1++;
        }


        int m=d();
        for(int i=0;i<m;i++){
            int x=d();
            if(x&1)odd2++;
            else even2++;
        }
        ll ans=0;
        ans+=odd1*odd2;
        ans+=even1*even2;
        printf("%lld\n",ans);
    }
}
