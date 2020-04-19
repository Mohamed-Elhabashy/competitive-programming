#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const long long N = 1e3+2,OO=1e18;
int cnt[N];
int main()
{
    int n;
    scanf("%d",&n);
    int x,ans=0;
    for(int i=0; i<n; i++)
    {
        scanf("%d",&x);
        if(x==4)
            cnt[4]++;
        else if(x==8)
        {
            if(cnt[4])
            {
                cnt[4]--;
                cnt[8]++;
            }
        }
        else if(x==15)
        {
            if(cnt[8])
            {
                cnt[8]--;
                cnt[15]++;
            }
        }
        else if(x==16)
        {
            if(cnt[15])
            {
                cnt[15]--;
                cnt[16]++;
            }
        }
        else if(x==23)
        {
            if(cnt[16])
            {
                cnt[16]--;
                cnt[23]++;
            }
        }
        else if(x==42)
        {
            if(cnt[23])
            {
                cnt[23]--;
                ans+=6;
            }
        }
    }
    printf("%d\n",n-ans);
}
