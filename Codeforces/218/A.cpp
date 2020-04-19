#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=2e5+10,OO = 0x3f3f3f3f;
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
int arr[1000];
int main()
{
    int n=d(),k=d();
    n*=2;
    n++;
    for(int i=0;i<n;i++)
        scanf("%d",arr+i);
    for(int i=1;i<n;i+=2){
        if(arr[i]-arr[i-1] > 1&& arr[i]-arr[i+1]>1){
        arr[i]=arr[i]-1;
        k--;
        if(k==0)
        break;
        }

    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
        puts("");
}