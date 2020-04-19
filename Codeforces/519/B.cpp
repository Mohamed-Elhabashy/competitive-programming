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

int main()
{
int n=d();
int sum1=0,sum2=0,sum3=0;
for(int i=0;i<n;i++){
    int x=d();
    sum1+=x;
}
for(int i=0;i<n-1;i++){
    int x=d();
    sum2+=x;
}
for(int i=0;i<n-2;i++){
    int x=d();
    sum3+=x;
}
printf("%d\n%d\n",sum1-sum2,sum2-sum3);
}
