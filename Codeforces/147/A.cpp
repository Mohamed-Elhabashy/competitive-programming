    #include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
string s;

int main()
{
    getline(cin,s);
    string a="";
    bool f=1;
    for(int i=0;i<s.length();i++){

        if(s[i]==' ' && f){

            a+=' ';
            f=0;
        }
        else{
            a+=s[i];
            f=1;
        }

    }

    string ans="";
    for(int i=0;i<a.length();i++){

        if(a[i]==',' || a[i]=='.' || a[i]=='!' || a[i]=='?'){
            if(ans[ans.length()-1]==' ')ans.pop_back();

            ans+=a[i];
            ans+=' ';
        }
        else if(a[i]==' '){
            if(ans.length()-1 >=0 && ans[ans.length()-1]==' ')ans.pop_back();

            ans+=" ";
        }
        else ans+=a[i];

    }
    cout<<ans<<endl;
}
