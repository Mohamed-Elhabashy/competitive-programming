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
int arr[N];
int even,odd,before_odd,before_even;

int main()
{
    int n=d();
    for(int i=1;i<=n;i++){
        scanf("%d",arr+i);
        if(i&1)odd+=arr[i];
        else even+=arr[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++){
        if(i&1)odd-=arr[i];
        else even-=arr[i];
        if(odd+before_even==even+before_odd)
        ans++;

        if(i&1)before_odd+=arr[i];
        else before_even+=arr[i];
    }

    printf("%d\n",ans);

}
