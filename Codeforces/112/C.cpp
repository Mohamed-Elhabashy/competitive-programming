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
    ll n=lld(),x=lld(),y=lld();
    n--;
    ll temp=y-n;
    if((temp*temp)+n >=x  && temp>0){
        while(n--)cout<<1<<endl;
        cout<<temp<<endl;
    }
    else puts("-1");
}
