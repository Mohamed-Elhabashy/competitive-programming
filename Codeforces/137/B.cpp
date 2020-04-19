#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e6,OO = 0x3f3f3f3f;
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
map<int,int>mp;
int main()
{
    int n=d();
    for(int i=0;i<n;i++){
        int x=d();
        mp[x]++;
    }
    int ans=0;
    for(int i=1;i<=n;i++)
        if(mp[i]==0)
        ans++;
    printf("%d\n",ans);
}