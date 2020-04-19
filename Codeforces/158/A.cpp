#include<bits/stdc++.h>
using namespace std;
int arr[1000];
int main(){
    int n,k;
    scanf("%d %d",&n,&k);

    for(int i=0;i<n;i++) scanf("%d",arr+i);
    int ans=0;
    k=arr[k-1];
    for(int i=0;i<n;i++) if(arr[i]>=k && arr[i]>0)ans++;
    cout<<ans<<"\n";

}
