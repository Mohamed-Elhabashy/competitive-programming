#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
map<int,int>mp;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        mp.clear();
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            mp[x]++;
        }
        cout<<mp.size()<<endl;
    }
}
