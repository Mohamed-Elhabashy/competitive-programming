#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long N = 1e5+200,OO=1e15;
int n,k,x;

list<int>v;
vector<int>ans;
map<int,int>mp;
int main()
{
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&x);
        if(v.size()<k && mp[x]==0){
           v.push_back(x);
           mp[x]=1;
        }
        else if(v.size()==k &&mp[x]==0){
            auto it=v.begin();
            mp[*it]=0;
            v.pop_front();
            v.push_back(x);
            mp[x]=1;

        }

    }
    cout<<v.size()<<endl;
    for(auto p:v)ans.push_back(p);
    for(int i=ans.size()-1;i>=0;i--)
        cout<<ans[i]<<" ";
}
