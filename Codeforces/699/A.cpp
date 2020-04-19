#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=200000+10,OO = 0x3f3f3f3f;
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
int arr[N];
char arr1[N];
ll a,b,m;
ll power(ll a, ll b){
   if(!b)  return 1;
   return a*power(a, b-1);
}
int main()
{
    int n=d();
    scanf("%s",arr1);
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);

        int ans=INT_MAX;
        bool flag=0;
    for(int i=0;i<n;i++){
        if(arr1[i]=='R' && arr1[i+1]=='L'){
            if((arr[i+1]-arr[i])%2==0){
                flag=1;
                ans=min(ans,(arr[i+1]-arr[i])/2);
            }
        }
    }
    if(flag)
    printf("%d\n",ans);
    else
    puts("-1");
}