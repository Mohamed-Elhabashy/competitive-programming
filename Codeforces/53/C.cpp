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
    int x=1,y=n;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            printf("%d ",x);
            x++;
            }
        else{
            printf("%d ",y--);

        }
    }
    printf("\n");
}
