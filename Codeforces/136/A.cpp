#include<bits/stdc++.h>
using namespace std;

int arr[105];
int main(){
    int n,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
       scanf("%d",&x);
       arr[x-1]=i+1;
    }
    for(int i=0;i<n;i++){
       printf("%d ",arr[i]);
    }
    printf("\n");
}
