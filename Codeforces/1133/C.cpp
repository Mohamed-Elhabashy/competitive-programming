#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int n;
int arr[N];

bool ok(int t){
    int l=1,r=1,mx=-1;

    while(r<=n){

        if(arr[r]-arr[l]<=5){
            int x=r-l+1;
            if(x>=t)return 1;
            r++;
        }
        else
            l++;

    }
    return 0;
}

int bs(){
    int lo=1,hi=1e8,mid;

    while(lo<hi){
        mid=(lo+hi+1)/2;
        if(ok(mid)){
            lo=mid;
        }
        else
            hi=mid-1;
    }
    return lo;
}
int main()
{

    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>arr[i];
    sort(arr+1,arr+n+1);
    cout<<bs();
}