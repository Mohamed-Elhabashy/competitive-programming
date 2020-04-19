#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int n,k;
string s;
vector<int>v[26];
map<int,int>mp;
int main()
{
    cin>>n>>k;
    cin>>s;
    for(int i=0;i<s.length();i++){
        v[s[i]-'a'].push_back(i);
    }
    for(int i=0;i<26;i++){
        bool f=0;
        for(int j=0;j<v[i].size();j++){
            if(k==0){
                f=1;
                break;
            }
            mp[v[i][j]]=1;
            k--;
        }
        if(f)break;
    }
    for(int i=0;i<s.length();i++){
        if(mp[i]==0)cout<<s[i];
    }
    cout<<endl;
}
