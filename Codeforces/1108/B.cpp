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
int arr[200];
vector<ll> getDivisors(ll n)        //O(sqrt(n))
{
    vector<ll>ret;
    ll i;
    for(i = 1 ; i < n/i ; ++i)
    {
        if(n%i == 0)
        {
            ret.push_back(i);
            ret.push_back(n/i);
        }
    }
    if(i == n/i && n%i==0)    ret.push_back(i);
    sort(ret.begin(),ret.end());
    return ret;
}
int main()
{
    int n=d();
    for(int i=0;i<n;i++)
    scanf("%d",arr+i);
    sort(arr,arr+n);
    printf("%d ",arr[n-1]);
    auto vv=getDivisors(arr[n-1]);
    for(auto v:vv){
        for(int i=0;i<n;i++){
            if(arr[i]==v){
                arr[i]=-1;
                break;
            }
        }
    }
    sort(arr,arr+n);
    printf("%d\n",arr[n-1]);

}
