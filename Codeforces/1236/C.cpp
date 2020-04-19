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
const long long N = 400,OO=0x3f3f3f3f;
int arr[N][N];
int main()
{
    int n=d();
    int start=1;
    int t=n;
    int flag=1;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)arr[i][j]=start++;
    for(int i=2;i<=n;i+=2){
        for(int j=1,k=n;j<k;j++,k--)
            swap(arr[i][j],arr[i][k]);
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++)printf("%d ",arr[j][i]);
        puts("");}
}
