#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e6+4,OO = 0x3f3f3f3f;
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
ll lcm(ll a,ll b){
    return a/__gcd(a,b) * b;
}



int main()
{
    string s,s1;
    cin>>s>>s1;
    if(s==s1 || s=="1")
    cout<<s<<endl;
    else
    cout<<1<<endl;
}
