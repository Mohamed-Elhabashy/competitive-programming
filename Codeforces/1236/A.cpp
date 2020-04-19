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
const long long N = 13845+30,OO=0x3f3f3f3f;
int arr[N];
int arr1[N];
int main()
{
    int t=d();
    while(t--)
    {
        int a=d(),b=d(),c=d();
        int ans=0;
        int two_b=b/2;
        int two_c=c/2;
        int mx1=0;
        int mx2=0;
        while(b>=1 && c>=2)
        {
            b-=1;
            c-=2;
            mx1+=3;
        }
        while(a>=1 && b>=2)
        {
            a-=1;
            b-=2;
            mx1+=3;
        }
        while(a>=1 && b>=2)
        {
            a-=1;
            b-=2;
            mx2+=3;
        }
        while(b>=1 && c>=2)
        {
            b-=1;
            c-=2;
            mx2+=3;
        }
        printf("%d\n",max(mx1,mx2));

    }

}
