#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N = 1e6+5;
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
pair<int,int> ans[N];
map<int,int>mp;
int main()
{
    int n=d(),k=d();
    for(int i=0;i<n;i++)scanf("%d",arr+i);
    for(int i=0;i<n;i++){
        scanf("%d",arr1+i);
        ans[i].first=arr[i]-arr1[i];
        ans[i].second=i;

    }
    sort(ans,ans+n);
    for(int i=0;i<k;i++){
        mp[ans[i].second]=1;
    }
    for(int i=k;i<n;i++){
        if(ans[i].first<0)
        mp[ans[i].second]=1;
    }
    ll sum=0;
    for(int i=0;i<n;i++){
        if(mp[i])
            sum+=arr[i];
        else
            sum+=arr1[i];

    }
    printf("%lld\n",sum);
}
