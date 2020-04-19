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
int arr[300];

int main(){
    int n=d();
    
    int i=0;
    while(n--){
        int x=d();
        arr[i]+=x;
        i++;
        if(i==3)
            i=0;
    }
    
    if(arr[0]>=arr[1] && arr[0]>=arr[2])
        printf("chest\n");
    else if(arr[1]>=arr[0] && arr[1]>=arr[2])
        printf("biceps\n");
    else
        printf("back\n");
}
