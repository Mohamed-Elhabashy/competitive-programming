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
ll xi,yi,cx,cy,n,m;
bool isok(ll t){
    if(cx+(t*xi) <=n && cx+(t*xi)>0 && cy+(t*yi)<=m && cy+(t*yi)>0)return 1;
    return 0;
}
ll binary_Search(){
    ll hi=2e9,lo=0,mid;
    ll ans=-1;
    while(hi>lo){

        mid=(hi+lo+1)/2;
        if(isok(mid)) lo=mid,ans=mid;
        else hi=mid-1;
    }
    return ans;
}
int main(){
     cin>>n>>m;
     cin>>cx>>cy;
    ll k;
    cin>>k;
    ll ans=0;
    while(k--){
        cin>>xi>>yi;
        ll v=binary_Search();
        if(v!=-1){
        cx=cx+(v*xi);
        cy=cy+(v*yi);
        ans+=v;

        }
    }
    cout<<ans<<endl;
}
