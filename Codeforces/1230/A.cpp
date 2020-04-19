#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long N = 1e6+2,OO=0x3f3f3f3f;
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
int arr[10];
int main(){
    for(int i=0;i<4;i++)
        scanf("%d",arr+i);
    sort(arr,arr+4);
    if(arr[3]+arr[0]==arr[1]+arr[2])
    puts("YES");

    else if(arr[3]==arr[0]+arr[1]+arr[2])
    puts("YES");
    else
    puts("NO");
}
