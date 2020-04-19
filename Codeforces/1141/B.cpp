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
int arr[N];
int main(){
    int n=d();
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
    }
    int start=0,ed=0,mx=INT_MIN,cnt=0;
    if(arr[0]==1){
    start++;
    for(int i=1;i<n;i++){
        if(arr[i]==1)
        start++;
        else
        break;
    }
    }
    if(arr[n-1]==1){
    ed++;
    for(int i=n-2;i>0;i--){
        if(arr[i]==1)
        ed++;
        else
        break;
    }
    }
    if(start+ed ==n){
        printf("%d\n",n);
        return 0;
    }

    mx=start+ed;
    for(int i=0;i<n;i++){
        if(arr[i]==1)
            cnt++;
        else{
            mx=max(mx,cnt);
            cnt=0;
        }
    }
    printf("%d\n",mx);
}
