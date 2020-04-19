#include<bits/stdc++.h>
using namespace std;

int arr[105];
int main(){
    int n;
    scanf("%d",&n);
    int sum=0,cnt=0,cnt_sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
        sum+=arr[i];
    }

    sort(arr,arr+n);


    for(int i=n-1;sum>=cnt_sum;i--){
        cnt++;
        sum-=arr[i];
        cnt_sum+=arr[i];
    }
    printf("%d\n",cnt);

}
