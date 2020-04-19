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

int main(){
    int n=d();
    int k=d();
    int l=d();
    int r=d();
    int sall=d();
    int sk=d();
    int reminder=sk%k;
    for(int i=0;i<k;i++){
        printf("%d ",(sk/k)+(reminder>0?1:0));
        reminder--;
    }
    n-=k;
    if(n>0){
    sall-=sk;
    reminder=sall%n;
    for(int i=0;i<n;i++){
        printf("%d ",(sall/n)+(reminder>0?1:0));
        reminder--;
    }
    }

}