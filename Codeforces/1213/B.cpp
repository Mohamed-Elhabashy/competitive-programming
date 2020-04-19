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
int arr[N];
int arr1[N];
vector<int>v;
int main()
{
    int t=d();
    while(t--)
    {
        int n=d();
        for(int i=0; i<n; i++)
        {
            scanf("%d",arr+i);

        }
        int ans=0,mn=arr[n-1];
        for(int i=n-2;i>=0;i--){
            if(arr[i]>mn)ans++;
            mn=min(mn,arr[i]);
        }
        printf("%d\n",ans);
    }

}
/*
vector<ll> getDivisors(ll n){
    vector<ll>ret;
    ll i;
    for(i=1;i<n/i;i++){
        if(n%i==0){
            ret.push_back(i);
            ret.push_back(n/i);
        }
    }
    if(i*i==n) ret.push_back(i);

    return ret;
}
*/
