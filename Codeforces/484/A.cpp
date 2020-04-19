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
    while(n--){
        long long l=lld();
        long long r=lld();
        long long ans;
        for(int i=0;i<63;i++){
            if(l>r)
                break;
            ans=l;
            l = l | (1|(1ll<<i));

        }
        printf("%lld\n",ans);
    }

}
