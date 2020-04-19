#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int n;
string s;

vector<int>ans;
void solve(){
    for(int i=1;i<=200;i++)
        if(n%i==0)ans.push_back(i);
}
int main()
{
    cin>>n;
    cin>>s;
    solve();
    for(int i=1;i<ans.size();i++){
        int l=0,r=ans[i]-1;
        while(l<r){
           // cout<<l<<" "<<r<<endl;
            swap(s[l],s[r]);
            r--;
            l++;
        }
        //cout<<s<<endl;
    }
    cout<<s<<endl;
}
