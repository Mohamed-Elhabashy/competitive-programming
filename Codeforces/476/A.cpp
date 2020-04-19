#include<bits/stdc++.h>
using namespace std;

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
bool cmp(int s,int f){
    if(s>f)
        return true;

    return false;
}

int main(){
    int n=d(),m=d();
    bool flag1=false,flag2=false, flag3=false;
    int mn=INT_MAX;
    if(n%m==0){
        mn=min(mn,n);
        flag1=true;

    }

    if( (n/2)%m==0 && n%2==0){
        mn=min(mn,n/2);
        flag2=true;

    }
    int cnt=0,sum=n;
    while(true){

        int one=n-sum;
        if(((sum/2)+ one)%m==0 && sum%2==0){

            cnt=(sum/2)+ one;


            mn=min(mn,cnt);
            flag3=true;
            break;
        }
        sum--;
        if(sum<=0){
        break;
        }
    }

    if(flag1==true || flag2==true || flag3==true)
    printf("%d\n",mn);
    else
    printf("-1\n");
}
