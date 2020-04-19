#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define U first
#define V second

const int N=150000+20,OO = 0x3f3f3f3f;
int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld", &ret);
    return ret;
}

int main()
{
    int t=d();
    while(t--)
    {
        ll n=lld(),m=lld();
        ll sum=0;
        if(m>n)
        {
            printf("0\n");
            continue;
        }
        if(n<(m*10))
        {
            for(ll i=m; i<=n; i+=m)
                sum+=i%10;
            printf("%lld\n",sum);
            continue;

        }
        for(ll i=m; i<(m*10); i+=m)
            sum+=(i%10);
        ll x=n/(m*10);
        ll ans=x*sum;
        sum=0;
        if(x*m*10<n)
        for(ll i=x*m*10; i<=n; i+=m)
            sum+=i%10;


        ans+=sum;
        printf("%lld\n",ans);
    }

}
