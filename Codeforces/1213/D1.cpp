#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define U first
#define V second

const int N=2e5+10,OO = 0x3f3f3f3f;
int d()
{
    int ret;
    scanf("%d", &ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld", &ret);
    return ret;
}
int arr[100];
map<int,int>mp;
int main()
{
    int n=d(),k=d();
    for(int i=0; i<n; i++)
    {
        scanf("%d",arr+i);
        mp[arr[i]]++;
        if(mp[arr[i]]==k)
        {
            puts("0");
            return 0;
        }
    }
    sort(arr,arr+n);
    int ans=INT_MAX;

    for(int i=0; i<N; i++)
    {
        int te=0,cnt=0;
        for(int j=0; cnt<k&&j<n; j++)
        {
            int temp=arr[j];
            if(arr[j]==i)cnt++;
            else
            {
                int t=0;
                while(temp>i)
                {
                    temp/=2;
                    t++;
                }
                if(temp==i)
                {
                    te+=t;
                    cnt++;
                }
            }

        }
        if(cnt==k)
        ans=min(ans,te);
    }
    printf("%d\n",ans);
}
