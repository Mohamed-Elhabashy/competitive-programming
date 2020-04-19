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
    int ans=0;
    for(int i=0;i<n;i++){
        int x=d();
        if(x>k)ans+=2;
        else ans++;
    }
    printf("%d\n",ans);
}
