#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +10;
typedef long long ll;
int t,n,l,r;
char c;
int main()
{
    cin>>t;
    map<int,int>mp1;
    map<int,int>mp2;

    while(t--){
        cin>>c>>n;
        if(c=='L')
            mp1[n]=++l;

        else if(c=='R')
            mp2[n]=++r;
        else{
            int ans;
            if(mp2[n]!=0){

                ans=min(l+mp2[n]-1,r-mp2[n]);
            }
            else{
                ans=min(l-mp1[n],r+mp1[n]-1);
            }
            cout<<ans<<endl;

        }
    }
}
