#include<bits/stdc++.h>
using namespace std;

const int N=1e6+30;
typedef long long ll;

int t,n;
int arr[N];
int ans[N];
void solve(){
    bool same=0,dif=0;

    for(int i=0;i<n;i++){
        if(arr[i]!=arr[(i+1)%n]) dif=1;
        else same=1;
    }
    if(!dif){
        cout<<1<<endl;
        for(int i=0;i<n;i++)cout<<1<<" ";
        cout<<endl;
        return;
    }
    if(n%2==0){
        cout<<2<<endl;

        for(int i=0;i<n;i++)if(i&1)cout<<1<<" ";
        else cout<<2<<" ";
        cout<<endl;

        return ;
    }
    if(same){
        cout<<2<<endl;
        ans[0]=1;
        bool f=0;
        for(int i=1;i<n;i++){
            if(!f && arr[i]==arr[i-1]){
               ans[i]=ans[i-1];
               f=1;
            }
            else
                ans[i]=3-ans[i-1];
        }
        if(!f){
            ans[n-1]=ans[0];
        }
        for(int i=0;i<n;i++)cout<<ans[i]<<" ";
        cout<<endl;

        return ;

    }
    cout<<3<<endl;
    ans[0]=1;
    for(int i=1;i<n;i++) ans[i]=3-ans[i-1];
    ans[n-1]=3;
    for(int i=0;i<n;i++)cout<<ans[i]<<" ";
    cout<<endl;
}
int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=0;i<n;i++)cin>>arr[i];

        solve();
    }
}
