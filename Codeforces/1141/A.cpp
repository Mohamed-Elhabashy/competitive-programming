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
    int m=d();
    if(n==m)
        printf("0\n");
    else if (m<n || m%n !=0){
        printf("-1\n");
    }
    else{
        int x=m/n;
        int cnt_2=0;
        int cnt_3=0;
        while(x!=1){
        if(x%2==0){
            x/=2;
            cnt_2++;
        }
        else if(x%3==0){
            x/=3;
            cnt_3++;
        }
        else {
            printf("-1\n");
            return 0;
        }

        }
        printf("%d\n",cnt_2+cnt_3);
    }
}
