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
    int c=d(),l=d();
    for(int i=1;i<=c;i++){
        int x=d();
        mp[i]=x;
    }
    int ans=0;

    for(int i=0;;i++){
        if(l+i>c  && l-i<=0)break;
        //cout<<i<<" "<<mp[l+i]<<" "<<mp[l-i]<<" ---- ";
        if(mp[l+i] && mp[l-i]){
            if(l+i ==l-i)ans++;
            else ans+=2;

        }
        else if(mp[l+i] && l-i<1)ans++;
        else if(mp[l-i] && l+i>c)ans++;
       //cout<<ans<<endl;
    }
    printf("%d\n",ans);
}
