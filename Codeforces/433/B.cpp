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
ll arr[N];
ll arr1[N];
ll arr2[N];
int main()
{
    int n=d();

    for(int i=1;i<=n;i++){
        int x=d();
        arr[i]=x;
        arr1[i]=arr1[i-1]+x;
    }
    sort(arr+1,arr+n+1);
    for(int i=1;i<=n;i++){
        arr2[i]=arr2[i-1]+arr[i];
    }

    int t=d();
    while(t--){
        int op=d(),l=d(),r=d();
        if(op==1)
            printf("%lld\n",arr1[r]-arr1[l-1]);

        else
            printf("%lld\n",arr2[r]-arr2[l-1]);
    }
}
