#include<bits/stdc++.h>
using namespace std;

const long long N=1e6;
int d(){
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld(){
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
int arr[300];

int main(){
    long long x=lld();
    long long y=lld();
    long long n=lld();
    long long ans,x1,y1;
    ans=(x/n)+(y/n);
    x1=x%n;
    y1=y%n;
    if(x1+y1>=n){
    ans++;
    printf("%lld %lld\n",ans,n-max(x1,y1));

    }
    else
    printf("%lld 0\n",ans);
}
