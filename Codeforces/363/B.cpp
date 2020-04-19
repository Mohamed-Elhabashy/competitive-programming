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

long long cm[N];

int main(){
    int n=d();
    int k=d();
    for(int i=1;i<=n;i++){
        int x;
        scanf("%d",&x);
        cm[i]=cm[i-1]+x;
    }


    int x=n-(k-2);
    long long mn=1e18;
    int index=-1;
    for(int i=1;i<x;i++){
        int now=i+(k-1);
        if((cm[now]-cm[i-1])<mn){
        mn=cm[now]-cm[i-1];
        index=i;
        
        }
    }
    
    printf("%d\n",index);

}