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
const long long N = 1e5+20,OO=0x3f3f3f3f;

int arr[N];
int main()
{
    ll heigth=0,width=0;
    int n=d();
    for(int i=0;i<n;i++)scanf("%d",arr+i);
    sort(arr,arr+n);
    for(int i=n-1,j=0;j<i;i--,j++){
        width+=arr[i];
        heigth+=arr[j];
    }
    if((n-1) %2==0)
    width+=arr[(n-1)/2];
    cout<<(width*width)+(heigth*heigth)<<"\n";
}
