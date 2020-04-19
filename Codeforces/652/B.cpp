#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
int n;
int arr[N];

void solve(){
    for(int i=0;i<n;i++){
        if(i==n-1)cout<<arr[i]<<endl;
        else
        cout<<arr[i]<<" "<<arr[n-1]<<" ";
        n--;
    }
}
int main()
{
    cin>>n;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr,arr+n);
    solve();
}
