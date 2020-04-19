#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long N = 1e3+2,OO=1e18;
vector<ll> getDivisors(ll n)        //O(sqrt(n))
{
    vector<ll>ret;
    ll i;
    for(i = 1 ; i < n/i ; ++i)
    {
        if(n%i == 0)
        {
            ret.push_back(i);
            ret.push_back(n/i);
        }
    }
    if(i == n/i && n%i==0)    ret.push_back(i);
    return ret;
}
ll arr[N][N];
int main()
{
    ll n;
    scanf("%lld",&n);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            scanf("%lld",&arr[i][j]);
        }
    }
    auto v=getDivisors(arr[0][1]);
    vector<ll>temp;
    for(int i=0; i<v.size(); i++)
    {

        temp.clear();
        temp.push_back(v[i]);
        for( int j=1;j<n;j++){
            temp.push_back(arr[j][0]/v[i]);
        }
        bool flag=1;
        for(int j=0; j<n; j++)
        {
            bool f=0;
            for(int y=j+1; y<n; y++)
            {
                if(j==y)continue;
                flag&=(temp[j]*temp[y]==arr[j][y]);
                if(flag==0){
                    f=1;
                    break;
                }
            }
            if(f)break;
        }
        if(flag){
            for(auto vv:temp)printf("%lld ",vv);

            return 0;
        }
    }
}
