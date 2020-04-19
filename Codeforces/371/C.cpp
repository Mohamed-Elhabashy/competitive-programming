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
long long fact(long long n)
{
    if(n==1)
        return 1;
    return n * fact(n-1);
}


long long n,a[3],b[3],c,r;
long long cnt[3];


bool isok(long long nn){
    long long temp=r;
    if(nn * cnt[0] > a[0]) temp-=(nn*cnt[0] - a[0])*b[0];
    if(nn * cnt[1] > a[1]) temp-=(nn*cnt[1] - a[1])*b[1];
    if(nn * cnt[2] > a[2]) temp-=(nn*cnt[2] - a[2])*b[2];

    return temp>=0;
}
long long binary_Search(){
    long long lo=0,hi=2e14,mid;
    while(hi-lo >0){
        mid=(hi+lo+1)/2;

        if(isok(mid))
        lo=mid;
        else
        hi=mid-1;
    }
    return lo;
}
string s;
int main(){
    cin>>s;

    for(int i=0;i<s.length();i++){
        if(s[i]=='B')
        cnt[0]++;
        else if(s[i]=='S')
        cnt[1]++;
        else
        cnt[2]++;
    }

    cin>>a[0]>>a[1]>>a[2];
    cin>>b[0]>>b[1]>>b[2];
    cin>>r;

    cout<<binary_Search();


}


