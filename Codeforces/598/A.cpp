#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long N = 1e3+2,OO=0x3f3f3f3f;
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

int main(){
    vector<int>v;
    for(int i=0;i<31;i++)
        v.push_back(pow(2,i));
    int t=d();
    while(t--){
        ll n=d();
        long long sum=(n*(n+1))/2;

        for(int i=0;v[i]<=n;i++){
            sum-=2*v[i];
        }

        cout<<sum<<endl;
    }
}
