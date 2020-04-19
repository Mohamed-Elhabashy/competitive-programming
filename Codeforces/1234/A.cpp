#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long N = 1e5+200,OO=1e15;
int n,t,x,arr[200];
int main()
{
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        ll sum=0;
        for(int i=0;i<n;i++){
            scanf("%d",arr+i);
            sum+=arr[i];
        }
        if(sum%n==0){
            printf("%lld\n",sum/n);
        }
        else
            printf("%lld\n",sum/n +1);


    }
}
