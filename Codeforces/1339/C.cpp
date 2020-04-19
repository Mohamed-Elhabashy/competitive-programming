#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +10;
typedef long long ll;
int n,x,t;
int arr[N];
vector<ll>tmp;
int solve(ll d)
{
    int cnt=0;
    for(int i=0; i<=40; i++)
    {
        cnt++;
        ll p=1LL<<i;
        if(p==d)
            return cnt;
        else if(p>d)return cnt-1;

    }
}
int solve1(ll diff)
{
    int cnt = 0;
    while (diff > 0)
    {
        diff /= 2;
        cnt++;
    }
    return cnt;
}
int main()
{
    scanf("%d",&t);
    while(t--)
    {
        int idx=0;
        scanf("%d",&n);
        for(int i=0; i<n; i++)
            scanf("%d",&arr[i]);
          int ans=0;
        for(int i=1;i<n;i++){
                  if(arr[i]>=arr[i-1])continue;
                  
                  int d=arr[i-1]-arr[i];
                  for(int i=0;i<40;i++){
                      ll a=1LL<<i;
                      if(a>d){
                          ans=max(ans,i);
                          break;
                      }
                      else if(a==d){
                          ans=max(ans,i+1);
                                break;
                      }
                  }
                  arr[i]=arr[i-1];
        }
        cout<<ans<<endl;

    }
}
