#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1,x2,x3,x4;
    scanf("%d %d %d %d\n",&x1,&x2,&x3,&x4);
    string s;
    cin>>s;

    int ans=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='1')ans+=x1;
        if(s[i]=='2')ans+=x2;
        if(s[i]=='3')ans+=x3;
        if(s[i]=='4')ans+=x4;
    }
    cout<<ans<<"\n";
}
