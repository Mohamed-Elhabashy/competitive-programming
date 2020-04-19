#include<bits/stdc++.h>
using namespace std;

const int N=1e6+30;
typedef long long ll;

int t,n;
string s;
void solve(){
    string ans1="1";
    string ans2="1";bool f=1,f1=0;
    for(int i=1;i<n;i++){
        if(s[i]=='2'){
            if(f1){
            ans1+='0';
            ans2+='2';
            }
            else{
                ans1+='1';
                ans2+='1';
            }
        }
        else if(s[i]=='1' && f){
            ans1+='1';
            ans2+='0';f=0;f1=1;
        }
        else if(s[i]=='1' && !f){
            ans1+='0';
            ans2+='1';
        }
        else if(s[i]=='0'){
            ans1+='0';
            ans2+='0';
        }
    }
    cout<<ans1<<endl<<ans2<<endl;
}
int main()
{
    cin>>t;
    while(t--){
        cin>>n;
        cin>>s;
        solve();
    }
}
