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
bool cmp(int s,int f){
    if(s>f)
        return true;

    return false;
}
char arr[N];
int arr1[N];

int main(){
    int n=d();
    int k=d();
    int cnt=0;
    while(n--){
        int ans=0,cnt1=0;
        int x=d();

        while(x!=0){
            if(x%10 <=k){
                ans |=(1<<(x%10));
            }
            x/=10;
        }

        for(int i=0;i<=k;i++){
            if(ans & (1<<i))
                cnt1++;
        }
        if(cnt1==k+1)
            cnt++;
    }


    printf("%d\n",cnt);
}
