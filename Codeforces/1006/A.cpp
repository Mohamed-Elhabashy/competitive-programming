#include<bits/stdc++.h>
using namespace std;


int arr[1005];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",arr+i);
        printf("%d ",arr[i]%2 ?arr[i] : arr[i]-1);
    }

    printf("\n");
}
