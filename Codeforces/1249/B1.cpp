#include <bits/stdc++.h>
using namespace std ;
#define ll long long
int d()
{
    int t ;
    scanf( "%d", &t ) ;
    return t ;
}
ll lld()
{
    ll t ;
    scanf( "%lld", &t ) ;
    return t ;
}
const long long N = 1e5+20,OO=0x3f3f3f3f,mod=1e9+7;
int arr[300];
int main()
{
    int t=d();
    while(t--){
        int n=d();
        for(int i=1;i<=n;i++)
        scanf("%d",arr+i);

        for(int i=1;i<=n;i++){

            int j=i;
            int cnt=0;
            while(arr[j]!=i){
                j=arr[j];
                cnt++;
            }

            cout<<cnt+1<<" ";

        }
        cout<<"\n";
    }
}
