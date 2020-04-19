#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int n,s;
int arr[N];

bool isok(int k)
{
    vector<ll>v;
    if(k>n)return 0;
    for(ll i=1;i<=n;i++){
        v.push_back((i*k)+arr[i]);

    }
    sort(v.begin(),v.end());
    ll sum=0;
    for(int i=0;i<k;i++)
        sum+=v[i];
    return (sum<=s);
}
int bs(){
    int l=0,h=n,mid;
    while(l<h){
        mid=(l+h+1)/2;
        if(isok(mid)){
            l=mid;
        }
        else
            h=mid-1;

    }
    return l;
}

int main()
{
    cin>>n>>s;
    for(int i=1;i<=n;i++)cin>>arr[i];

    int x=bs();

    cout<<x<<" ";
    vector<ll>v;
    for(ll i=1;i<=n;i++){
        v.push_back((i*x)+arr[i]);

    }
    sort(v.begin(),v.end());
    ll sum=0;
    for(int i=0;i<x;i++)
        sum+=v[i];
    cout<<sum<<endl;
}