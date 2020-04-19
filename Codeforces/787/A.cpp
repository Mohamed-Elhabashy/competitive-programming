#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

const int N=1e7;

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
vector<ll> getDivisors(ll n)        //O(sqrt(n))
{
    vector<ll>v;
    ll i;
    for(i = 1 ; i < n/i ; ++i)
    {
        if(n%i == 0)
        {
            v.push_back(i);
            v.push_back(n/i);


        }
    }
    if(i == n/i && n%i==0)
    {
        v.push_back(n/i);

    }
    return v;
}
map<int,int>mp;
int main()
{
    int a=d(),b=d();
    int c=d(),dd=d();
    int x,y;

    for(int i=0;i<100000;i++){
        x=(b)+(i*a);
        y=(dd)+(i*c);
        mp[max(x,y)]++;

        if(mp[min(x,y)]==1){
            printf("%d\n",min(x,y));
            return 0;
        }


    }
    printf("-1\n");

}
