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
int arr[N];
int main()
{
  int n=d(),cnt=0;
  while(n>0){
    if(n&1)
      cnt++;
    n=(n>>1);  

  }

  printf("%d\n",cnt);
}
