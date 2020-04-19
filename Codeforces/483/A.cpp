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
    long long l=lld(),r=lld();
    for(long long a=l;a<r;a++){

        for(long long b=a+1;b<=r;b++){
        for(long long c=b+1;c<=r;c++){

        if(__gcd(a,b)==1 && __gcd(b,c)==1 && __gcd(a,c)!=1){
            printf("%lld %lld %lld\n",a,b,c);
            return 0;
        }
        }
    }
    }
    printf("-1\n");

}
