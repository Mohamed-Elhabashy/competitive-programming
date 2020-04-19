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
const int N = 1e6+5;

int arr[N];
int main()
{
    int n=d();
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            int x=d();
            arr[i]=max(arr[i],x);
        }
    bool f=1;
    for(int i=0;i<n;i++){
        if(arr[i]==n-1 && f)
        printf("%d ",n),f=0;
        else
        printf("%d ",arr[i]);
    }
}
