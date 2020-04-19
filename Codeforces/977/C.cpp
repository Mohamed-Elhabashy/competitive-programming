#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int n,k;
int arr[N];
vector<int>v;
map<int,int>mp;
map<int,int>mp1;
void solve(){
    if(k==0){
        if(arr[0]==1)cout<<-1<<endl;
        else cout<<1<<endl;
        return ;
    }
    for(int i=0;i<k;i++){
        mp1[arr[i]]=mp[arr[i]];
    }
    int ans=0;
    for(auto m:mp1){
        ans+=m.second;
    }

    if(ans==k &&k>0){
        cout<<arr[k-1]<<endl;
        return ;
    }
    cout<<-1<<endl;


}
int main()
{
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    sort(arr,arr+n);

    solve();
}
