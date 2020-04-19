#include<bits/stdc++.h>
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
ll arr[3];

int main()
{
    int t=d();
    while(t--)
    {
        scanf("%lld %lld %lld",arr+0,arr+1,arr+2);
        if(arr[0]==arr[1] && arr[1]==arr[2]){
            puts("0");
            continue;
        }
        sort(arr,arr+3);
        bool f=0;
        if(arr[0] != arr[1]){
            arr[0]++;

        }
        else {
            arr[0]++;
            arr[1]++;

        }

        if(arr[2]!=arr[1])arr[2]--;
        else {
            if(arr[0]==arr[1] && arr[1]==arr[2]){
            puts("0");
            continue;
            }
            arr[2]--;
            arr[1]--;
        }


        cout<<abs(arr[0]-arr[1])+abs(arr[0]-arr[2])+abs(arr[1]-arr[2])<<"\n";
    }
}
