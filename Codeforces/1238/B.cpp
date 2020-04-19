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
const long long N = 1e5+20,OO=0x3f3f3f3f;
int arr[N];

int main()
{
    int t=d();
    while(t--){
        int n=d();
        ll r=lld();
        ll ans=1;
        ll temp=r;
        int y=0;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            int x=d();
            if(mp[x]==1){
            }
            else{
            arr[y++]=x;
            mp[x]=1;
            }
        }
        sort(arr,arr+y);
        int last=arr[n-1];
        for(int i=y-2;i>=0;i--){
            arr[i]-=r;
            if(arr[i]<=0)continue;
            ans++;
            
            r+=temp;
			
            

        }
        printf("%lld\n",ans);
    }
}
/*
1
10 1
1 2 3 4 7 7 7 10 15 17
*/
