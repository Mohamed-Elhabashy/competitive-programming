#include<bits/stdc++.h>
using namespace std;

const int N=1e5 +10;
typedef long long ll;
int arr[N];
int t,n,x;
int main()
{
    cin>>t;
    while(t--)
    {

        cin>>n>>x;
        for(int i=0; i<n; i++)
            cin>>arr[i];
        sort(arr,arr+n);
        double sum=0;
        ll ans=0;
        ll cnt=0;
        for(int i=n-1;i>=0;i--){
            sum+=arr[i];
            cnt++;
            double tmp=sum/cnt;
            if(tmp>=x){
                ans=max(ans,cnt);
            }

        }
        cout<<ans<<endl;
    }
}
