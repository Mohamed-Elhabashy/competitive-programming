#include<bits/stdc++.h>
using namespace std;
const long long N=1e6;
int d()
{
    int ret;
    scanf("%d",&ret);
    return ret;
}
long long lld()
{
    long long ret;
    scanf("%lld",&ret);
    return ret;
}
bool cmp(pair<int,int>s,pair<int,int>f)
{
    if(f.first>s.first)
        return true;
    else if(f.first==f.second && f.second<s.second)
        return true;
    else
        return false;
}
int cm[N];

int main()
{
    int n=d();
    for(int i=1;i<=n;i++){
        int x=d();
        cm[i]=x+cm[i-1];
    }
    int t=d();
    while(t--){
    int x=d();
    cout<<lower_bound(cm,cm+n,x)-cm<<endl;
    }

    return 0;
}
