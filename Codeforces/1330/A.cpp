#include<bits/stdc++.h>
using namespace std;

const int N=103;
const int NN=1e5+3;
typedef long long ll;
int t,n,x,a;
int main()
{
    cin>>t;
    while(t--){
        map<int,int>mp;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>a;
            mp[a]=1;
        }
        int ans=0;
        for(int i=1;;i++){
            if(mp[i]==1){
                ans++;
            }
            else if(x>0){
                ans++;
                x--;

            }
            else{
                break;
            }
        }
        cout<<ans<<endl;

    }
}

