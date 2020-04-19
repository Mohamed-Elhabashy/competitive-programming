#include<bits/stdc++.h>
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
map<char,bool>mp;
char arr[N];
int main()
{
    int n=d(),m=d();
    scanf("\n%s",arr);
    ll ans=0;
    //printf("%s\n",arr);
    while(m--){
        char c;
        scanf(" %c",&c);

        mp[c]=1;
    }
    //cout<<mp['a']<<" " <<mp['b']<<" "<<mp['c']<<"\n";
    for(int i=0;i<n;i++){
        long long cnt=0;
        bool f=0;
        for(int j=i;j<=n;j++){
            if(j==n){
                f=1;
                break;
            }
            if(mp[arr[j]])cnt++;
            else{
                i=j;
                break;
            }
        }

        //cout<<cnt<<"\n";
        ans+=(cnt*(cnt+1))/2;
        if(f)break;
    }
    printf("%lld\n",ans);
}