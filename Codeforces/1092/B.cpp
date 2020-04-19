#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,arr+n);
    int cnt=0;
    for(int i=0;i<n;i+=2){
        cnt+=arr[i+1]-arr[i];
    }
    printf("%d\n",cnt);
}
