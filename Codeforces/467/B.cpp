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
int arr[N];
int main(){
    int n=d();
    int m=d();
    int k=d();
    int fedor;
    for(int i=0;i<m;i++)
        scanf("%d",arr+i);
        scanf("%d",&fedor);
    int ans=0;
    for(int i=0;i<m;i++){
        int dif=0;
        arr[i]^=fedor;
        for(int j=0;j<n;j++){
            if((arr[i] & (1<<j))!=0)
                dif++;
        }
        if(dif<=k)
        ans++;
    }
    printf("%d\n",ans);
}
