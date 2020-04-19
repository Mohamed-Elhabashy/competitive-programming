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

int main(){
    long long r=lld(),x=lld(),y=lld(),x1=lld(),y1=lld();
    printf("%lld\n",(long long) ceil(sqrt(((x-x1)*(x-x1))+((y-y1)*(y-y1)))/(2*r)));
    return 0;
}
