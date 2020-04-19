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
int a[N],b[N],c[N],pos[N];

int main()
{
    int n=d();
    for(int i=0;i<n;i++){
        scanf("%d",a+i);
        a[i]--;
    }

    for(int i=0;i<n;i++){
        scanf("%d",b+i);
        b[i]--;
    }


    for(int i=0;i<n;i++)
        pos[b[i]]=i;


    for(int i=0;i<n;i++)
        c[i]=pos[a[i]];

    int mx=-1,ans=0;
    for(int i=0;i<n;i++)
        if(c[i]>mx)
        mx=c[i];
        else
            ans++;
    cout<<ans<<endl;
}
