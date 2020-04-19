#include<bits/stdc++.h>
using namespace std;

const int N=1e4+30;
typedef long long ll;
int n,m,d;
int arr[N];
int ans[N];
int sum;
bool solve(){
    int pos=0;
    for(int i=1;i<=m;i++){
        pos=pos+d;
        pos+=arr[i]-1;
    }
    pos+=d;
    return (pos>=n+1);

}

void solve1(){
    int pos=0;
    for(int i=1;i<=m;i++){
        if(pos+d+sum<=n+1)pos+=d;
        else
            pos=n+1-sum;

        for(int j=pos;j<arr[i]+pos;j++){
            ans[j]=i;sum--;
        }

        pos=arr[i]+pos-1;
    }
}
int main()
{
    cin>>n>>m>>d;
    for(int i=1;i<=m;i++){cin>>arr[i];sum+=arr[i];}
    if(solve()){
        cout<<"YES\n";
        solve1();
        for(int i=1;i<=n;i++)cout<<ans[i]<<" ";
    }
    else
        cout<<"NO\n";
}



