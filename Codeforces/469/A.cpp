#include<bits/stdc++.h>
using namespace std;
const int N=1e6;
int D(){
    int ret;
    scanf("%d",&ret);
    return ret;
}
int arr[N];
int arr1[N];

int main(){
    int n=D();
    int p=D();
    int sum=0;
    while(p--){
        int x=D();
        arr[x]++;
    }
    int q=D();
    while(q--){
        int x=D();
        arr[x]++;
    }
    for(int i=1;i<=n;i++){
        if(arr[i]==0){
            printf("Oh, my keyboard!\n");
            return 0;
        }

    }
    printf("I become the guy.\n");
}
