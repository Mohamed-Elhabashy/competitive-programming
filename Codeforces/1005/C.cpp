#include<bits/stdc++.h>
using namespace std;

const int N=120000 +3;
typedef long long ll;
int n,arr[N];
map<int,int>mp;
int solve(){
    int ans=0;

    for(int i=0;i<n;i++){
        bool f=0;
        for(ll j=0;j<33;j++){
            ll tmp=pow(2,j);
            if(tmp>arr[i]){
                ll dif=tmp-arr[i];
                if(arr[i]==dif && mp[arr[i]]<=1)continue;
                int idx=lower_bound(arr,arr+n,dif)-arr;
                if(arr[idx]==dif){

                    f=1;
                    break;
                }
            }
        }
        if(!f)ans++;
    }
    return ans;
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }
    sort(arr,arr+n);
    cout<<solve()<<endl;
}
