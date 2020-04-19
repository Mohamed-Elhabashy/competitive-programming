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
    bool flag=false;
    int n=d(),v=d();
    int y=0,cnt=0;
    for(int j=0;j<n;j++){
        int p=d();
        for(int i=0;i<p;i++){
            int x=d();
            if(flag!=true){
            if(x<v){
            cnt++;
            arr[y++]=j;
            flag=true;
            }
            }
        }
        flag=false;
    }

    printf("%d\n",cnt);
    for(int i=0;i<cnt;i++){
        printf("%d ",arr[i]+1);
    }
    printf("\n");
}
