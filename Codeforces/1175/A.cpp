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
int arr[2000];

int main(){
    long long t=lld();
    while(t--){
        long long n=lld(),k=lld();
        long long cnt=0;
        while(true){
            long long temp=n%k;

            if(temp==0){
                n=n/k;
                cnt++;
            }
            else{
                n-=temp;
                cnt+=temp;
            }
            if(n==0)
                break;

        }
        printf("%lld\n",cnt);
    }
}
