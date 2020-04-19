#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
ll lld()
{
    ll ret;
    scanf("%lld", &ret);
    return ret;
}
const int N = 1e6+5;
map<pair<int,int>,int>mp;
int main()
{
    int n=d(),x=d(),y=d();
    n/=2;
    if((x==n || x==n+1) && (y==n || y==n+1))puts("NO");
        else puts("YES");
}
