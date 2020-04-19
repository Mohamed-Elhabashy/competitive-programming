#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


const int N=200000+10,OO = 0x3f3f3f3f;
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
int h[40],g[40];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d %d",&h[i],&g[i]);
    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(h[i]==g[j])
            ans++;
        }
    }
    printf("%d\n",ans);
}
