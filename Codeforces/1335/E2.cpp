#include<bits/stdc++.h>
using namespace std;
const int N=2e5 +30;
typedef long long ll;
int t,n,x,arr[3000];
int frq[300];

int main()
{
    scanf("%d",&t);
    while(t--){
        vector<int>v[300];
        memset(frq,0,sizeof frq);
        scanf("%d",&n);
        int ans=0;
        for(int i=1;i<=n;i++)
        {
            cin>>x;
            frq[x]++;
            ans=max(ans,frq[x]);
            v[x].push_back(i);
        }
        for(int i=1;i<=200;i++){
            int sz=v[i].size();
            for(int l=0,r=sz-1;l<r;l++,r--){
                int cnt=(l+1)*2;
                int mx=-1;
                for(int x=1;x<=200;x++){
                    if(x==i || v[x].size()==0)continue;
                    int tmp=upper_bound(v[x].begin(),v[x].end(),v[i][r])-lower_bound(v[x].begin(),v[x].end(),v[i][l]);
                    mx=max(mx,tmp);
                }
                ans=max(ans,cnt+mx);
            }
        }
        printf("%d\n",ans);
    }
}
