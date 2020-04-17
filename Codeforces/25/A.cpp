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

    int ans;
    scanf("%d",arr+0);

    for(int i=1;i<n;i++){
        scanf("%d",arr+i);

    }
    if(arr[1]%2==arr[0]%2){
        ans=arr[1]%2;
    }
    else{
        if(arr[0]%2==arr[2]%2){
            printf("2\n");
            return 0;
        }
        if(arr[1]%2==arr[2]%2){
            printf("1\n");
            return 0;
        }
        if(arr[0]%2==arr[1]%2){
            printf("3\n");
            return 0;
        }
    }
    if(ans==1){
        ans=0;
    }
    else
        ans=1;
    for(int i=0;i<n;i++){
        if(arr[i]%2==ans){
            printf("%d\n",i+1);
            return 0;
        }
    }



}
