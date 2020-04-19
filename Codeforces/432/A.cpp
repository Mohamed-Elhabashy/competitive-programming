#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
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
int arr[N];
int main(){
    int n=d(),k=d();
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
        arr[i]+=k;
    }

    int cnt=0,ans=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=5){
            cnt++;
            if(cnt==3){
                ans++;
                cnt=0;
            }
        }
    }
    printf("%d\n",ans);
}
