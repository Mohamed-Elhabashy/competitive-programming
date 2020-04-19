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
map<int,int>mp;
ll table,ans;
int main()
{
    int n=d();
    n*=2;
    for(int i=0;i<n;i++){
        ll x=lld();
        mp[x]++;
        if(mp[x]==2){
            mp[x]=0;
            table--;
        }
        else{
            table++;

            ans=max(ans,table);
        }
    }
    printf("%lld\n",ans);
}
