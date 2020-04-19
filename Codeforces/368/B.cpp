#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
ll lld()
{
    ll ret;
    scanf("%lld", &ret);
    return ret;
}
const int N=1e6;
int arr[N];
int arr1[N];
map<int,int>mp;
int main()
{
    int n=d(),m=d();
    for(int i=0;i<n;i++)scanf("%d",arr+i);
    for(int i=n-1;i>=0;i--){
        if(mp[arr[i]]){
            arr1[i]=arr1[i+1];
        }
        else{
            arr1[i]=arr1[i+1]+1;
            mp[arr[i]]=1;
        }
    }
    //for(int i=0;i<n;i++)printf("%d ",arr1[i]);
    //puts("");
    while(m--){
        int x=d();
        printf("%d\n",arr1[x-1]);
    }
}
