#include<bits/stdc++.h>
using namespace std;
const int N =2e5,OO=0x3f3f3f3f;
long long t,x,y,a,b;
int main()
{
    cin>>t;
    while(t--){
        string t;
        cin>>t;
        if(t.length()==1){
            cout<<t<<endl;
            continue;
        }
        bool f=0;
        for(int i=0;i<t.length();i++){
            if(t[i]=='1')f=1;
        }
        if(!f){
            cout<<t<<endl;
            continue;
        }
        f=0;
        for(int i=0;i<t.length();i++){
            if(t[i]=='0')f=1;
        }
        if(!f){
            cout<<t<<endl;
            continue;
        }

        string ans=to_string(t[0]-'0');
//        cout<<"11 "<<ans<<endl;;
        int idx=0;
        int en=1;
        while(true){
            if(ans[idx++]=='0'){
                ans+='1';
            }
            else {
                ans+='0';
            }
            if(t[en]==ans[idx])en++;
            if(en==t.length())break;
        }
        cout<<ans<<endl;
    }
}
