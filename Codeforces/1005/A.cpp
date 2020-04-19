#include<bits/stdc++.h>
using namespace std;

const int N=1e5+30;
typedef long long ll;
int n,t,x;
int main()
{
    cin>>n;
    vector<int>ans;
    cin>>x;
    int cnt=x;
    for(int i=1;i<n;i++){
        cin>>x;
        if(x==1){

            ans.push_back(cnt);
            cnt=1;
        }
        else
            cnt=x;
    }
    ans.push_back(cnt);
    cout<<ans.size()<<endl;
    for(auto v:ans)cout<<v<<" ";
}
