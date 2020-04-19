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
int main()
{
    int t=d();
    while(t--){
        int n=d(),s=d(),k=d();
        mp.clear();
        for(int i=0;i<k;i++){
            int x=d();
            mp[x]=1;
        }
        ll ans1,ans2;
        ans1=ans2=1e10;
        for(int i=s;i<=n;i++){
            if(mp[i]==0){
                ans1=i;
                break;
            }
        }
        for(int i=s-1;i>=1;i--){
            if(mp[i]==0){
                ans2=i;
                break;
            }
        }
        //cout<<ans1<<" " <<ans2<<endl;
        if(ans1==1e10)
            printf("%lld\n",s-ans2);
        else if(ans2==1e10)
            printf("%lld\n",ans1-s);
        else
            printf("%lld\n",min(s-ans2,ans1-s));
    }
}
