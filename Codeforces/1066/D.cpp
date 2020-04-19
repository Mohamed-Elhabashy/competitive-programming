#include<bits/stdc++.h>
using namespace std;
const int N=2e5 +30;
typedef long long ll;
int n,m,k,arr[N];

bool ok(int num){
    int cnt=1;
    int sum=0;
    for(int i=num;i<n;i++){
        if(sum+arr[i]<=k){
            sum+=arr[i];
        }
        else{
            cnt++;
            sum=arr[i];
        }

    }
    return cnt<=m;
}
int bs(){
    int l=0,r=n-1,mid;
    int ans=0;
    while(l<=r){
        mid=(l+r)/2;
        if(ok(mid)){
            r=mid-1;
            ans=n-mid;
        }
        else
            l=mid+1;
    }
    return ans;
}
int main()
{

    cin>>n>>m>>k;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<bs()<<endl;

}
