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
int arr[2000];

int main(){
    int x;

    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++){
        cin>>arr[i];
    }
    int mx=INT_MIN;
    for(int i=0;i<x;i++){
        int c=1;
        for(int j=i;j>=0;j--){
            if(arr[j]>=arr[j-1] && j-1>=0)
                c++;
            else
                break;
            }


            for(int k=i;k<=x-1;k++){
            if(arr[k]>=arr[k+1] && k+1<x)
                c++;
            else
                break;
            }
        mx=max(mx,c);
    }
    cout<<mx;
}
