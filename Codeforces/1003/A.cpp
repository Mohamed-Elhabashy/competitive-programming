#include<bits/stdc++.h>
using namespace std;

const int N=1e4+30;
typedef long long ll;

int t,n;
map<int,int>mp;
int main()
{
    cin>>n;
    while(n--)
    {
        cin>>t;
        mp[t]++;
    }
    int mx=-1;
    for(auto m:mp)mx=max(mx,m.second);
    cout<<mx<<endl;
}
