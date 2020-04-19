#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define U first
#define V second

const int N=1e3+4,OO = 0x3f3f3f3f;
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
int cnt_even,cnt_odd;
int arr[N];

int main()
{
    int n=d();
    for(int i=0;i<n;i++){
        int x=d();
        if(x%2==0)
            cnt_even++;
        else
                cnt_odd++;

    }
    printf("%d\n",min(cnt_odd,cnt_even));
}
/*
vector<ll> getDivisors(ll n){
    vector<ll>ret;
    ll i;
    for(i=1;i<n/i;i++){
        if(n%i==0){
            ret.push_back(i);
            ret.push_back(n/i);
        }
    }
    if(i*i==n) ret.push_back(i);

    return ret;
}
*/
