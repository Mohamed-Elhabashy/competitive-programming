#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +10;
typedef long long ll;
int n,t,v,l,r;

int main()
{
    cin>>t;
    while(t--){
        cin>>n>>v>>l>>r;
        int ans=n/v;

        int ans1=(r/v)-((l-1)/v);
        cout<<ans-ans1<<endl;
    }
}

