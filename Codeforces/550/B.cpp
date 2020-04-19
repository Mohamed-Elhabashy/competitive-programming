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
  int n=d(),l=d(),r=d(),x=d();
  for(int i=0;i<n;i++)
    scanf("%d",arr+i);
  int cnt=0;
  for(int i=0;i<(1<<n);i++){
      int sum=0;
      int mx=INT_MIN,mn=INT_MAX;
    for(int j=0;j<n;j++){
        if(i & (1<<j)){
          sum+=arr[j];
          mx=max(arr[j],mx);
          mn=min(arr[j],mn);
        }
    }
    
    if(sum>=l && sum<=r && (mx-mn)>=x){
    
    cnt++;
    }
  }
  printf("%d\n",cnt);  
}
