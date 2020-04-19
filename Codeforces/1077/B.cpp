#include<bits/stdc++.h>
using namespace std;
int arr[105];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int cnt=0;
    for(int i=0;i<n-2;i++){

        if(arr[i]==1){
            if(arr[i+1]==0){
            if(arr[i+2]==1){
            cnt++;
            i+=2;

                }
            }
        }
    }
    printf("%d\n",cnt);
}
