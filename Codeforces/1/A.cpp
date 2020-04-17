#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int d()
{
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
bool cmp(pair<int,int>s,pair<int,int>f)
{
    if(f.first>s.first)
        return true;
    else if(f.first==f.second && f.second<s.second)
        return true;
    else
        return false;
}

long long ceilValue(long long a, long long b){
    long long ret = a/b;
    if(a%b) ++ret;
    return ret;
}
 
int main(){ 
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
    printf("%lld\n", ceilValue(n, a)*ceilValue(m, a)); 
    return 0;
}
