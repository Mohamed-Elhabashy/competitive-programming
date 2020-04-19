#include<bits/stdc++.h>
using namespace std;

const int N=1e6+30;
typedef long long ll;

ll t,a,b;
int solve(){
    if(a%b==0)return 0;
    ll ans=a/b;
    ans++;
    return (ans*b)-a;
}
int main()
{
    cin>>t;
    while(t--){
        cin>>a>>b;
        cout<<solve()<<endl;;
    }
}
