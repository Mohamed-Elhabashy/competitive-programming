#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e3,OO = 0x3f3f3f3f;
int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld", &ret);
    return ret;
}
string s="";
void solve(){
    string s1;
    for(int i=1;true;i++){
        s1=to_string(i);
        s+=s1;
        if(s.length()>2000)
        break;
    }
}
int main()
{
    int n=d();
    solve();
    cout<<s[n-1]<<endl;
}