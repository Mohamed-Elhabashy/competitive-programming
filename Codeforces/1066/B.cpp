#include<bits/stdc++.h>
using namespace std;
const int N=1e5 +10;
typedef long long ll;
int n,r,arr[N],fr[N];

int main()
{
    cin>>n>>r;
    for(int i=1; i<=n; i++)
        cin>>arr[i];

    int ans=0;

    for(int i=1; i<=n; i++)
    {
        if(fr[i]==0)
        {
            bool f=0;
            int x;
            for(int j=max(1,i-r+1); j<=min(i+r-1,n); j++)
            {
                if(arr[j]==1)
                {
                    f=1;
                    x=j;
                }
            }
            if(!f)
            {
                puts("-1");
                return 0;
            }
            ans++;
            for(int j=max(1,x-r+1); j<=min(x+r-1,n); j++)
                fr[j]=1;

        }
    }
    cout<<ans<<endl;
}
