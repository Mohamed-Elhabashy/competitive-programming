    #include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
string s;

int main()
{
 int t;
 cin>>t;
 while(t--){
    cin>>s;
    vector<int>v;
    for(int i=0;i<s.length();i++){
        if(s[i]=='R')v.push_back(i+1);
    }
    int n=s.length();
    if(v.size()==0){
        cout<<s.length()+1<<endl;
        continue;
    }
    else if(v.size()==1){
        cout<<max(v[0],(n+1)-v[0])<<endl;continue;
    }
    int mx=-1;
    for(int i=0;i<v.size();i++){
        //cout<<i<<" "<<v[i]<<" "<<mx<<endl;
        if(i==0)mx=max(mx,v[i]);
        else if(i==v.size()-1){
            mx=max(mx,(n+1)-v[i]);
            mx=max(mx,v[i]-v[i-1]);
        }
        else
            mx=max(mx,v[i]-v[i-1]);
    }
    cout<<mx<<endl;

 }

}