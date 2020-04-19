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
vector<string>v;

int main(){
    int n=d();
    if(n%2==1)
        printf("-1\n");
    else{
        int x=2;
        printf("%d ",x);
        for(int i=2;i<=n;i++){
            if(i%2==0){
                printf("%d ",--x);
                }
            else{
                x+=3;
                printf("%d ",x);
            }
        }
        printf("\n");
        }
}
