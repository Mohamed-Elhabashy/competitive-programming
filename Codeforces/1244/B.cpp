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
const long long N = 1e4,OO=0x3f3f3f3f;
string arr;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cin>>arr;
        if(arr[0]=='1' || arr[n-1]=='1'){
            cout<<2*n<<"\n";
            continue;
        }
        int ans=-1;
        for(int i=0;i<n;i++)
            if(arr[i]=='1'){
                int temp=max(i+1,n-(i+1)+1);
                ans=max(ans,temp);
            }



        if(ans==-1){
            cout<<n<<"\n";
            continue;
        }
		
        ans*=2;
        printf("%d\n",ans);
    }
}
