#include<bits/stdc++.h>
using namespace std;

const int N=1e7+30;
typedef long long ll;
int t,n;
int arr[200];


void solve()
{
    int op=n-1;
    int pos=1;
    int idx;
    while(op &&pos<=n)
    {

        int mn=INT_MAX;
        for(int i=pos; i<=n; i++)
        {
            if(arr[i]<mn)
            {
                mn=arr[i];
                idx=i;
            }
        }
        if(idx==pos){pos++;continue;}
        for(int i=idx; i>pos && op; i--)
        {
            swap(arr[i],arr[i-1]);
            op--;
        }
        pos=idx;
    }
}

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1; i<=n; i++)
            cin>>arr[i];
        solve();

        for(int i=1; i<=n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }

}
