#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6;
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
bool cmp(pair<int, int> s, pair<int, int> f)
{
    if (f.first > s.first)
        return true;
    else if (f.first == f.second && f.second < s.second)
        return true;
    else
        return false;
}
long long fact(long long n){
    if(n==1)
        return 1;
    return n * fact(n-1);
}

int cnt(long long n){
   int c=0;
    while(true){
        if(n==0)
        break;
        else{
        n/=10;
        c++;}
    }

    return c;

}
long long n,a[N],b[N],k;

bool isok(int nn){
    int temp=k;
    for(int i=0;i<n;i++){
        if( (a[i]*nn) > b[i]){
            if((a[i]*nn)-b[i] <=temp)
            temp-=(a[i]*nn) - b[i];
            else
            return 0;
        }
    }
    return 1;
}
long long binary_Search(){
    long long lo=0,hi=2e9,mid;
    while(hi-lo >0){
        mid=(hi+lo+1)/2;
        if(isok(mid))
            lo=mid;
        else
            hi=mid-1;
    }
    return lo;
}
int main()
{
    scanf("%lld%lld",&n,&k);
    for(int i=0;i<n;i++) scanf("%lld",a+i);
    for(int i=0;i<n;i++) scanf("%lld",b+i);

    printf("%lld",binary_Search());
}
