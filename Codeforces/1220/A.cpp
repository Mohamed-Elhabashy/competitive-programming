#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6,OO=1e18;

int main()
{
    int nn;
    cin>>nn;
    string s;
    cin>>s;
    int o=0,n=0,e=0;
    int z=0,r=0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='o')o++;
        else if(s[i]=='n')n++;
        else if(s[i]=='e')e++;
        else if(s[i]=='z')z++;
        else if(s[i]=='r')r++;
    }
    while(o>=1 &&  n>=1 && e>=1){
        cout<<1 <<" ";
        o--;
        n--;
        e--;
    }
    while(z>=1 && e>=1 && r>=1 && o>=1){
        cout<<0<<" ";
        z--;
        e--;
        r--;
        o--;
    }
    cout<<endl;
}
