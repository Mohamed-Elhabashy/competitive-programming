#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +10;
typedef long long ll;
int n,x,t;
int main()
{
    cin>>t;
    while(t--){
        vector<int>v;
        bool f=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        vector<int>ans;
        for(int i=0,j=n-1;i<=j;i++,j--){
            ans.push_back(v[i]);
            ans.push_back(v[j]);
        }

        for(int i=n-1;i>=0;i--)cout<<ans[i]<<" ";
        cout<<endl;

    }
}

