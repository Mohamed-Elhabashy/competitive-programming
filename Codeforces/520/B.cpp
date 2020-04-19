#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=1e5,OO = 0x3f3f3f3f;
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
int n,m;
int dis[N];
void solve()
{
    memset(dis,OO,sizeof dis);
    dis[n]=0;
    queue<int>q;
    q.push(n);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        if(u*2==m)
        {
            dis[m]=dis[u]+1;
            break;
        }
        else
        {
            if(dis[2*u]==OO)
            {

                q.push(2*u);
                dis[2*u]=dis[u]+1;
            }
        }

        if(u-1==m)
        {
            dis[m]=dis[u]+1;
            break;
        }
        else
        {
            if(u-1<0)
                continue;
            else
            {
                if(dis[u-1]==OO)
                {
                    q.push(u-1);
                    dis[u-1]=dis[u]+1;
                }
            }
        }
    }

}
int main()
{
    n=d(),m=d();
    solve();
    printf("%d\n",dis[m]);
}
