#include<bits/stdc++.h>
using namespace std;

const int N=1e6+20;
typedef long long ll;
int n,k;
int arr[N];
int main()
{
    cin>>n>>k;
    for(int i=1; i<=n; i++)
        cin>>arr[i];
    int ans=0;

    for(int i=1; i<=n; i++)
        if(arr[i]<=k)
        {
            ans++;
        }
        else
            break;

            int t=ans;
    for(int i=n; i>t; i--)
        if(arr[i]<=k)
        {
            ans++;
        }
        else
            break;
    cout<<ans<<endl;
}
