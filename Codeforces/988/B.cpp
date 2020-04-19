#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int n;
vector<pair<int,string>>v;
bool issub(string f,string s){
    if(s==f)return 1;
    //cout<<f<<" "<<s<<endl;
    for(int i=0;i<s.length();i++){
        if(s[i]==f[0]){
            int tmp=i;
            int j;
            for(j=0;j<f.length();j++){
                if(f[j]!=s[tmp++]){
                    
                    break;
                }
            }
            //cout<<"in sub  "<<i<< "  "<<j<<endl;
            if(j==f.length())return 1;
        }
    }
    return 0;
}
void solve(){
    for(int i=0;i<v.size()-1;i++){
        string f=v[i].second;
        string s=v[i+1].second;

        if(!issub(f,s)){
            //cout<<i<<endl;
            cout<<"NO\n";
            return ;
        }
    }
    cout<<"YES\n";
    for(int i=0;i<v.size();i++)cout<<v[i].second<<endl;
}

int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        string s;
        cin>>s;
        v.push_back({s.length(),s});
    }
    sort(v.begin(),v.end());
    solve();
}
