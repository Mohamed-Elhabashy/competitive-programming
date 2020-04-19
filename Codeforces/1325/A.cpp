#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
ll gcd(ll a, ll b){
    if(!b)  return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return a/__gcd(a, b)*b;
}
int main()
{
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        cout<<1<<" "<<x-1<<endl;
    }
}
