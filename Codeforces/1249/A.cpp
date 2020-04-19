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
int arr[200];
int main()
{
    int t=d();
    while(t--){
        int n=d();
        for(int i=0;i<n;i++)
        scanf("%d",arr+i);
        sort(arr,arr+n);
        bool flag=0;
        for(int i=0;i<n;i++){
            if((arr[i]+1)==arr[i+1] && i+1<n){
                flag=1;
            }
        }
        if(flag)
        puts("2");
        else
        puts("1");
    }
}
