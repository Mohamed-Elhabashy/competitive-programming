#include <bits/stdc++.h>
using namespace std;
const int N =2e5+10,OO=0x3f3f3f3f;
int t,n,k;
int arr[N];
int cm[N];
int main()
{
    cin>>t;
    while(t--){
        cin>>n>>k;
        memset(cm,0,sizeof cm);
        memset(arr,0,sizeof arr);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
        }
        for(int i=2;i<n;i++){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1])cm[i]=1;
        }
        for(int i=1;i<=n;i++)cm[i]+=cm[i-1];
        int ans=0;
        int mx=-1;
        for(int i=1;i<=n;i++){
            int l=i;
            int r=i+k-1;
            if(r>n){
                r=n;
            }
            int cnt=cm[r-1]-cm[l];
            if(cnt>mx){
                mx=cnt;
                ans=i;
            }
        }
        cout<<mx+1<<" "<<ans<<endl;
    }
}
 
