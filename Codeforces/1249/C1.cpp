#include <bits/stdc++.h>
using namespace std ;
#define ll long long
int d()
{
    int t ;
    scanf( "%d", &t ) ;
    return t ;
}
ll lld()
{
    ll t ;
    scanf( "%lld", &t ) ;
    return t ;
}
const long long N = 2e5+20,OO=0x3f3f3f3f,mod=1e9+7;
vector<int>ans;
void solve(){
    for(int i=1;i<19683+2;i++){
        bool f=1;
        int temp=i;
        while(temp>0){
            if(temp%3==2){
                f=0;
                break;
            }
            temp/=3;
        }
        if(f)ans.push_back(i);
    }
}
int main()
{
    solve();

    int t=d();
    while(t--){
        int n=d();
        printf("%d\n",*lower_bound(ans.begin(),ans.end(),n));
    }
}
