#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +10;
typedef long long ll;
ll n,t,x,j;
char arr[40];
map<int,int>mp;
int bs(){

}
int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        mp.clear();
         int mx=-1;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
            if(mp[x]>mx){
                j=x;
                mx=mp[x];
            }
        }

        if(n==1){
            cout<<0<<endl;
            continue;
        }
        if(mp.size()-1>=mp[j])cout<<mp[j]<<endl;
        else{
                int sz=mp.size();
                int ans=min(sz,mp[j]-1);
            if(ans>=0)
            cout<<ans<<endl;
            else cout<<0<<endl;
        }
    }
}
