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
const long long N = 1e6,OO=0x3f3f3f3f;
char arr[N];

int main()
{
    char c1='R';
    char c2='G';
    char c3='B';
    int n=d();
    scanf("%s",arr);
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            if(c1!=arr[i] && c1!=arr[i+2] )
            arr[i+1]=c1;
            else if(c2!=arr[i] && c2!=arr[i+2] )
            arr[i+1]=c2;
            else if(c3!=arr[i] && c3!=arr[i+2])
            arr[i+1]=c3;

            ans++;
        }
    }
    cout<<ans<<"\n";
    cout<<arr<<endl;
}
