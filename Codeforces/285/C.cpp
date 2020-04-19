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
int main(){
    int n;
    cin>>n;


    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    sort(arr+1,arr+n+1);
    long long sum=0;

    for(int i=1;i<=n;i++){
        sum+=(abs(arr[i]-i));
    }
    cout<<sum<<'\n';
}
